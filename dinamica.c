#include<stdio.h>
#include "declaraciones.h"


void menuDinamica(void)
{
    char opcionDinamica = 0;
    char ejecutarDinamica = 1;
    double masa = 0.0;
    double aceleracion = 0.0;
    double fuerza = 0.0;
    double peso = 0.0;

    while (ejecutarDinamica)
    {
        printf("====================================================\n");
        printf("                     DINAMICA\n");
        printf("====================================================\n");
        printf("Seleccione el calculo que desea realizar\n");
        printf("1. Calcular fuerza\n");
        printf("2. Calcular masa\n");
        printf("3. Calcular aceleracion\n");
        printf("4. Calcular peso\n");
        printf("0. Volver al menu principal\n");

        scanf("%hhd", &opcionDinamica);

        switch (opcionDinamica)
        {
            case 1:
                printf("Ingrese la masa (kg): ");
                scanf("%lf", &masa);
                printf("Ingrese la aceleracion (m/s^2): ");
                scanf("%lf", &aceleracion);
                fuerza = calcularFuerza(masa, aceleracion);
                printf("La fuerza es: %.2f N\n", fuerza);
                break;

            case 2:
                printf("Ingrese la fuerza (N): ");
                scanf("%lf", &fuerza);
                printf("Ingrese la aceleracion (m/s^2): ");
                scanf("%lf", &aceleracion);
                masa = calcularMasa(fuerza, aceleracion);
                printf("La masa es: %.2f kg\n", masa);
                break;

            case 3:
                printf("Ingrese la fuerza (N): ");
                scanf("%lf", &fuerza);
                printf("Ingrese la masa (kg): ");
                scanf("%lf", &masa);
                aceleracion = calcularAceleracionDinamica(fuerza, masa);
                printf("La aceleracion es: %.2f m/s^2\n", aceleracion);
                break;

            case 4:
                printf("Ingrese la masa (kg): ");
                scanf("%lf", &masa);
                peso = calcularPeso(masa);
                printf("El peso es: %.2f N\n", peso);
                break;

            case 0:
                ejecutarDinamica = 0;
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }
}

// ===== FUNCIONES DE DINAMICA =====

double calcularFuerza(double masa, double aceleracion)
{
    double fuerza = masa * aceleracion;
    return fuerza;
}
double calcularMasa(double fuerza, double aceleracion)
{
    double masa = fuerza / aceleracion;
    return masa;
}
double calcularAceleracionDinamica(double fuerza, double masa)
{
    double aceleracion = fuerza / masa;
    return aceleracion;
}
double calcularPeso(double masa)
{
    const double gravedad = 9.81; // Aceleración debida a la gravedad en m/s^2
    double peso = masa * gravedad;
    return peso;
}