#include "declaraciones.h"
#include <stdio.h>

void menuCinematica(void)
{
    char opcionCinematica = 0;
    char ejecutarCinematica = 1;

    while (ejecutarCinematica)
    {
        printf("====================================================\n");
        printf("                     CINEMATICA\n");
        printf("====================================================\n");
        printf("Seleccione el calculo que desea realizar\n");
        printf("1. Calcular velocidad\n");
        printf("2. Calcular distancia\n");
        printf("3. Calcular tiempo\n");
        printf("4. Calcular aceleracion\n");
        printf("5. Calcular velocidad final\n");
        printf("6. Calcular velocidad inicial\n");
        printf("0. Volver al menu principal\n");

        scanf("%hhd", &opcionCinematica);

        switch (opcionCinematica)
        {
            case 1:
                printf("Calcular velocidad\n");
                break;

            case 2:
                printf("Calcular distancia\n");
                break;

            case 3:
                printf("Calcular tiempo\n");
                break;

            case 4:
                printf("Calcular aceleracion\n");
                break;

            case 5:
                printf("Calcular velocidad final\n");
                break;

            case 6:
                printf("Calcular velocidad inicial\n");
                break;

            case 0:
                ejecutarCinematica = 0;
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }
}

double calcularVelocidad(double distancia, double tiempo)
{
    double velocidad = distancia / tiempo;
    return velocidad;
}

double calcularDistancia(double velocidad, double tiempo)
{
    double distancia = velocidad * tiempo;
    return distancia;
}

double calcularTiempo(double distancia, double velocidad)
{
    double tiempo = distancia / velocidad;
    return tiempo;
}

double calcularAceleracion(double velocidadFinal, double velocidadInicial, double tiempo)
{
    double aceleracion = (velocidadFinal - velocidadInicial) / tiempo;
    return aceleracion;
}

double calcularVelocidadFinal(double velocidadInicial, double aceleracion, double tiempo)
{
    double velocidadFinal = velocidadInicial + aceleracion * tiempo;
    return velocidadFinal;
}

double calcularVelocidadInicial(double velocidadFinal, double aceleracion, double tiempo)
{
    double velocidadInicial = velocidadFinal - aceleracion * tiempo;
    return velocidadInicial;
}