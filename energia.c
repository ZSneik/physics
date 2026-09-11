#include "declaraciones.h"
#include <stdio.h>

void menuEnergia(void)
{
    char opcionEnergia = 0;
    char ejecutarEnergia = 1;
    double masa = 0.0;
    double altura = 0.0;
    double velocidad = 0.0;
    double trabajo = 0.0;
    double tiempo = 0.0;
    double distancia = 0.0;
    double fuerza = 0.0;

    while (ejecutarEnergia)
    {
        printf("====================================================\n");
        printf("                     ENERGIA\n");
        printf("====================================================\n");
        printf("Seleccione el calculo que desea realizar\n");
        printf("1. Calcular energia cinetica\n");
        printf("2. Calcular energia potencial\n");
        printf("3. Calcular trabajo\n");
        printf("4. Calcular potencia mecanica\n");
        printf("0. Volver al menu principal\n");
        scanf("%hhd", &opcionEnergia);
    
    switch (opcionEnergia)
    {
    case 1:
    printf("ingrese la masa (kg): ");
    scanf("%lf", &masa);
    printf("Ingrese la velocidad (m/s): ");
    scanf("%lf", &velocidad);
    printf("La energia cinetica es: %.2f J\n", calcularEnergiaCinetica(masa, velocidad));
    break;

    case 2:
    printf("Ingrese la masa (kg): ");
    scanf("%lf", &masa);
    printf("Ingrese la altura (m): ");
    scanf("%lf", &altura);
    printf("La energia potencial es: %.2f J\n", calcularEnergiaPotencial(masa, altura));
    break;

    case 3:
    printf("Ingrese la fuerza (N): ");
    scanf("%lf", &fuerza);
    printf("Ingrese la distancia (m): ");
    scanf("%lf", &distancia);
    printf("El trabajo realizado es: %.2f J\n", calcularTrabajo(fuerza, distancia));
    break;
    case 4:
    printf("Ingrese el trabajo (J): ");
    scanf("%lf", &trabajo);
    printf("Ingrese el tiempo (s): ");
    scanf("%lf", &tiempo);
    printf("La potencia mecanica es: %.2f W\n", calcularPotenciaMecanica(trabajo, tiempo));
    break;

    case 0:
    ejecutarEnergia = 0;
    break;

    default:
    printf("Opcion invalida.\n");
    break;
    }
}
}

//==========FUNCIONES DE ENERGIA=========

double calcularEnergiaCinetica(double masa, double velocidad)
{
    return 0.5 * masa * velocidad * velocidad;
}

double calcularEnergiaPotencial(double masa, double altura)
{
    const double gravedad = 9.81;
    return masa * gravedad * altura;
}

double calcularTrabajo(double fuerza, double distancia)
{
    return fuerza * distancia;
}

double calcularPotenciaMecanica(double trabajo, double tiempo)
{
    return trabajo / tiempo;
}