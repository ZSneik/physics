#include <stdio.h>
#include "declaraciones.h"

int main(void)
{
    char opcionMenu = 0;
    char ejecutarPrograma = 1;

    while (ejecutarPrograma)
    {
        printf("====================================================\n");
        printf("Bienvenido a la calculadora de fisicas\n");
        printf("====================================================\n");
        printf("Seleccione la opcion que desea realizar\n");
        printf("1. cinematica\n");
        printf("2. dinamica\n");
        printf("3. electricidad\n");
        printf("4. energia\n");
        printf("5. vectores\n");
        printf("0. Salir\n");

        scanf("%hhd", &opcionMenu);

        switch (opcionMenu)
        {
            case 1:
                menuCinematica();
                break;

            case 2:
                printf("Dinamica\n");
                break;

            case 3:
                printf("Electricidad\n");
                break;

            case 4:
                printf("Energia\n");
                break;

            case 5:
                printf("Vectores\n");
                break;

            case 0:
                ejecutarPrograma = 0;
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }

    return 0;
}