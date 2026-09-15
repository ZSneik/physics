#include <stdio.h>
#include "declaraciones.h"

void menuFisica(void)
{
    char opcionFisica = 0;
    char ejecutarFisica = 1;

    while (ejecutarFisica)
    {
        printf("====================================================\n");
        printf("Bienvenido a la calculadora de fisicas\n");
        printf("====================================================\n");
        printf("Seleccione la opcion que desea realizar\n");
        printf("1. cinematica\n");
        printf("2. dinamica\n");
        printf("3. electricidad\n");
        printf("4. energia\n");
        printf("0. Volver al menu principal\n");

        scanf("%hhd", &opcionFisica);

        switch (opcionFisica)
        {
            case 1:
                menuCinematica();
                break;

            case 2:
                menuDinamica();
                break;

            case 3:
                menuElectricidad();
                break;

            case 4:
                menuEnergia();
                break;


            case 0:
                ejecutarFisica = 0;
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }

}