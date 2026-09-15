#include <stdio.h>
#include "declaraciones.h"

void menuColigativas(void)
{
    char opcionMenu = 0;
    char iniciarPrograma = 1;
    double factorVanthoff = 0;
    double constante = 0;
    double molalidad = 0;

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
do
{
    printf("Ingrese la constante ebullioscopica (Kb): ");
    scanf("%lf", &constante);

    if(constante <= 0)
    {
        printf("La constante debe ser mayor a 0.\n");
    }

} while(constante <= 0);

do
{
    printf("Ingrese el factor teorico de Vant Hoff (i)\n");
    scanf("%lf", &factorVanthoff);
    if(factorVanthoff <= 0)
    {
        printf("El factor ingresado debe ser mayor a 0");
    }
} while (factorVanthoff <= 0);

do
{
    printf("Ingrese la molalidad (m)");
    scanf("%lf", &molalidad);
    if(molalidad <= 0){
        printf("La molalidad debe ser mayor a 0");
        }
} while (molalidad <= 0);

    double resultado = calcularEbullioscopia(factorVanthoff,constante,molalidad);
    printf("Elevacion ebullioscopica: %.4f C\n", resultado);
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