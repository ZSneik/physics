#include <stdio.h>
#include "declaraciones.h"

void menuColigativas(void)
{
    char opcionMenu = 0;
    char iniciarPrograma = 1;

    while(iniciarPrograma)
    {
        printf("========== PROPIEDADES COLIGATIVAS ==========\n");
        printf("1: Elevacion ebullioscopica\n");
        printf("2: Descenso crioscopico\n");
        printf("0: Volver al menu de quimica\n");

        scanf("%hhd", &opcionMenu);

    switch(opcionMenu)
        {
            case 1:
                break;

            case 0:
                iniciarPrograma = 0;
                break;

            default:
                printf("Opcion invalida\n");
                break;
        }
    }
}