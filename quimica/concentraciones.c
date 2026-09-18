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
printf("5: Porcentaje masa/volumen\n");
printf("6: Porcentaje volumen/volumen\n");
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

    case 2:
    printf("ingresar moles de soluto.\n");
    scanf("%lf",&nsoluto);
    printf("Ingrese los kg de solvente \n");
    scanf("%lf",&msolvente);
    if(msolvente == 0){
        printf("La cantidad de solvente no puede ser igual a 0\n");
    }
else{
    printf("Molalidad: %.4f mol/Kg\n",
    calcularMolalidad(nsoluto, msolvente));
}
    break;

case 3:
    printf("Ingrese los moles del componente.\n");
    scanf("%lf", &ni);
    printf("Ingrese la cantidad total de moles de la mezcla\n");
    scanf("%lf",&ntotal);
if(ntotal == 0){
    printf("La cantidad total no puede ser igual a 0\n");
}
else{
    printf("La fraccion molar equivale a %.4f \n",
    fraccionmolar(ni,ntotal));
}
    break;

case 4:
    printf("Ingrese los gramos del soluto\n");
    scanf("%lf", &msoluto);
    printf("Ingrese los gramos de la solucion\n");
    scanf("%lf", &msolucion);
    if(msolucion == 0){
        printf("la masa de la solucion no pueden ser igual a 0\n");
    }
else{
    printf("El porcentaje masa masa equivale a %.4lf %%\n",
    masamasa (msoluto,msolucion));
}
    break;

    
case 5:

    printf("Ingrese los gramos del soluto\n");
    scanf("%lf", &msoluto);

    printf("Ingrese el volumen de la solucion en mL\n");
    scanf("%lf", &vsolucion);

    if(vsolucion == 0){

        printf("El volumen de la solucion no puede ser igual a 0\n");

    }

    else{

        printf("El porcentaje masa/volumen equivale a %.4f %%\n",

        masavolumen(msoluto, vsolucion));

    }

    break;

    
case 6:
    printf("Ingrese el volumen del soluto\n");
    scanf("%lf", &vsoluto);
    printf("Ingrese el volumen de la solucion");
    scanf("%lf",&vsolucion);
if(vsolucion == 0){
    printf("El volumen ingresado no puede ser igual a 0\n");
}
    else{
    printf("El porcentaje equivale a: %.4f %%\n",
    volumenvolumen (vsoluto, vsolucion));
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