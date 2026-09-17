#include<stdio.h>
#include"declaraciones.h"


void menuConcentraciones(void){

char opcionMenu = 0;
char iniciarPrograma = 1;


    double nsoluto = 0.0;
    double vsolucion = 0.0;
    double msolvente = 0.0;
    double ni = 0.0;
    double ntotal = 0.0;
    double msoluto = 0.0;
    double msolucion = 0.0;
    double vsoluto = 0.0;


while(iniciarPrograma){

printf("============CONCENTRACIONES=========\n");
printf("Bienvenido al menu de concentraciones\n");
printf("Seleccione el tipo de conversion que desea realizar\n");
printf("1: MolaRidad\n");
printf("2: MolaLidad\n");
printf("3: Fraccion molar\n");
printf("4: porcentaje masa/masa\n");
printf("5: Porcentaje masa/volument\n");
printf("6: Porcentaje volumen/volument\n");


printf("0: Salir del programa\n");
scanf("%hhd",&opcionMenu);
switch (opcionMenu)
{
case 1:
    printf("ingrese los moles de soluto\n");
    scanf("%lf",&nsoluto);
    printf("ingrese el volumen de la solucion Lt\n");
    scanf("%lf",&vsolucion);
    if(vsolucion ==0){
        printf("El volumen de la solucion no puede ser igual a 0\n");
    }
    else{
        printf("Molaridad: %.4f mol/L\n",
        calcularMolaridad(nsoluto, vsolucion));
    }
    break;


case 0:
    iniciarPrograma = 0;
    break;

default:
    printf("Seleccione una opcion valida, por favor\n");
    break;
}
}}


//================FUNCIONES MATEMATICAS============

double calcularMolaridad(double nsoluto, double vsolucion)
{
    return nsoluto / vsolucion;
}

double calcularMolalidad(double nsoluto, double msolvente)
{
    return nsoluto / msolvente;
}

double fraccionmolar(double ni, double ntotal)
{
    return ni / ntotal;
}

double masamasa(double msoluto, double msolucion)
{
    return (msoluto / msolucion) * 100;
}

double masavolumen(double msoluto, double vsolucion)
{
    return (msoluto / vsolucion) * 100;
}

double volumenvolumen(double vsoluto, double vsolucion)
{
    return (vsoluto / vsolucion) * 100;
}