#include <stdio.h>
#include "declaraciones.h"


void menuQuimica(void)
{
    char opcionMenu = 0;
    char iniciarPrograma = 1;
    while(iniciarPrograma)
    {
    printf("========== QUIMICA ==========\n");
    printf("Bienvenido/a a la seccion de quimica\n");
    printf("Seleccione una opcion\n");
    printf("1: Propiedades coligativas\n");
    printf("2: Calcular concentraciones\n");
    printf("0: Volver al menu principal\n");
    scanf("%hhd", &opcionMenu);
    switch (opcionMenu)
    {
    case 1:
    menuColigativas();
    break;
    
    case 2:
    menuConcentraciones();
    break;

    
    case 0:
    iniciarPrograma= 0;
    break;

    default:
    printf("Por favor seleccionar una opcion valida\n");
        break;
    }
}
}