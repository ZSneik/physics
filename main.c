#include<stdio.h>
#include"declaraciones.h"


int main(void)
{
    char opcionMenu = 0;
    char iniciarPrograma = 1;
    while(iniciarPrograma)
{

printf("==========MENU SCIENTIA==========\n");
printf("Bienvenido al menu de scientia\n");
printf("seleccione la disciplina de su operacion\n");
printf("1: Fisica\n");
printf("2: Quimica\n");
printf("3: Conversion de unidades\n");
printf("0: Salir del programa");
scanf("%hhd", &opcionMenu);

switch(opcionMenu){
    case 1: menuFisica();
    break;
    
    case 2: menuQuimica();
    break;

    case 3: menuConversiones();
    break;

    case 0: iniciarPrograma = 0;
    break;

    default:
    printf("Opcion no valida\n");
    break;
    }
  }
  return 0;
}