#include "declaraciones.h"
#include <stdio.h>

void menuCinematica(void)
{
    char opcionCinematica = 0;
    char ejecutarCinematica = 1;
            double distancia = 0.0;
            double tiempo = 0.0;
            double velocidad = 0.0;
            double velocidadFinal = 0.0;
            double velocidadInicial = 0.0;
            double aceleracion = 0.0;
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
                printf("Ingrese la distancia en metros :\n");
                scanf("%lf",&distancia);
                printf("Ingrese el tiempo en segundos:\n");
                scanf("%lf",&tiempo);
                if (tiempo == 0){
                    printf("Entrada invalida\n");
                    printf("resultado indefinido.\n");
                }
                else{
                velocidad=calcularVelocidad(distancia,tiempo);
                printf("La velocidad es: %.2lf m/s\n ",velocidad);
                }
                break;

            case 2:
                printf("Ingrese la velocidad en m/s:\n");
                scanf("%lf",&velocidad);
                printf("Ingrese el tiempo en segundos:\n");
                scanf("%lf",&tiempo);
                distancia=calcularDistancia(velocidad,tiempo);
                printf("La distancia es: %.2lf m\n ",distancia);
                break;

            case 3:
                printf("Ingrese la distancia en metros :\n");
                scanf("%lf",&distancia);
                printf("Ingrese la velocidad en m/s:\n");
                scanf("%lf",&velocidad);
                 if (velocidad== 0){
                    printf("Entrada invalida\n");
                    printf("resultado indefinido.\n");
                }
                else{
                tiempo=calcularTiempo(distancia,velocidad);
                printf("El tiempo es: %.2lf s\n ",tiempo);
                }
                break;

            case 4:
                printf("Ingrese la velocidad final en m/s:\n");
                scanf("%lf",&velocidadFinal);
                printf("Ingrese la velocidad inicial en m/s:\n");
                scanf("%lf",&velocidadInicial);
                printf("Ingrese el tiempo en segundos:\n");
                scanf("%lf",&tiempo);
                    if (tiempo== 0){
                    printf("Entrada invalida\n");
                    printf("resultado indefinido.\n");
                }
                else{
                aceleracion=calcularAceleracion(velocidadFinal,velocidadInicial,tiempo);
                printf("La aceleracion es: %.2lf m/s^2\n ",aceleracion);
                }
                break;

            case 5:
                printf("Ingrese la velocidad inicial en m/s:\n");
                scanf("%lf",&velocidadInicial);
                printf("Ingrese la aceleracion en m/s^2:\n");
                scanf("%lf",&aceleracion);
                printf("Ingrese el tiempo en segundos:\n");
                scanf("%lf",&tiempo);
                velocidadFinal=calcularVelocidadFinal(velocidadInicial,aceleracion,tiempo);
                printf("La velocidad final es: %.2lf m/s\n ",velocidadFinal);
                break;

            case 6:
                printf("Ingrese la velocidad final en m/s:\n");
                scanf("%lf",&velocidadFinal);
                printf("Ingrese la aceleracion en m/s^2:\n");
                scanf("%lf",&aceleracion);
                printf("Ingrese el tiempo en segundos:\n");
                scanf("%lf",&tiempo);
                velocidadInicial=calcularVelocidadInicial(velocidadFinal,aceleracion,tiempo);
                printf("La velocidad inicial es: %.2lf m/s\n ",velocidadInicial);
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


// ===== FUNCIONES DE CÁLCULO =====


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