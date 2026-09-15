#include <stdio.h>
#include "declaraciones.h"

void menuColigativas(void)
{
    char opcionMenu = 0;
    char iniciarPrograma = 1;
    double factorVanthoff = 0;
    double constante = 0;
    double molalidad = 0;
    double ebulloscopia = 0;

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
    printf("Ingrese la constante ebullioscopica (Kb): \n");
    scanf("%lf", &constante);
    printf("Ingrese el factor teorico de Vant Hoff\n");
    scanf("%lf", &factorVanthoff);
    printf("Ingrese la molalidad");
    scanf("%lf", &molalidad);
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



//=============EBULLOSCOPIA===========
double calcularEbullioscopia(double factorVanthoff,
                             double constante,
                             double molalidad)
{
    return factorVanthoff * constante * molalidad;
}