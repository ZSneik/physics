#include "declaraciones.h"
#include <stdio.h>

void menuElectricidad(void)
{
    char opcionElectricidad = 0;
    char ejecutarElectricidad = 1;
    double energia = 0.0;
    double voltaje = 0.0;
    double corriente = 0.0;
    double resistencia = 0.0;
    double potencia = 0.0;
    double tiempo = 0.0;

    while (ejecutarElectricidad)
    {
        printf("====================================================\n");
        printf("                     ELECTRICIDAD\n");
        printf("====================================================\n");
        printf("Seleccione el calculo que desea realizar\n");
        printf("1. Calcular voltaje\n");
        printf("2. Calcular corriente\n");
        printf("3. Calcular resistencia\n");
        printf("4. Calcular potencia\n");
        printf("5. Calcular energia\n");
        printf("0. Volver al menu principal\n");
        scanf("%hhd", &opcionElectricidad);
    
    switch (opcionElectricidad)
    {
    case 1:
    printf("Ingrese la corriente (A): ");
    scanf("%lf", &corriente);
    printf("Ingrese la resistencia (Ω): ");
    scanf("%lf", &resistencia);
    if(resistencia<=0){
        printf("Invalido, la resistencia debe ser mayor a 0");
    }
    else{
    printf("El voltaje es: %.2f V\n", calcularVoltaje(corriente, resistencia));
    }    
    break;

    case 2:
    printf("Ingrese el voltaje (V): ");
    scanf("%lf", &voltaje);
    printf("Ingrese la resistencia (Ω): ");
    scanf("%lf", &resistencia);
    if(resistencia<=0){
        printf("La resistencia debe ser mayor a 0");
    }
    else{
    printf("La corriente es: %.2f A\n", calcularCorriente(voltaje, resistencia));
    }
    break;

    case 3:
    printf("Ingrese el voltaje (V): ");
    scanf("%lf", &voltaje);
    printf("Ingrese la corriente (A): ");
    scanf("%lf", &corriente);
    if(corriente == 0){
        printf("La corriente debe ser distinta a 0.\n");
    }
    else{
            resistencia = calcularResistencia(voltaje,corriente);
            if(resistencia<=0){
                printf("La resistencia debe ser mayor a 0.\n");
            }
    else{
    printf("La resistencia es: %.2f Ω\n", resistencia);
    }
}
    break;

    case 4:
    printf("Ingrese el voltaje (V): ");
    scanf("%lf", &voltaje);
    printf("Ingrese la corriente (A): ");
    scanf("%lf", &corriente);
    printf("La potencia es: %.2f W\n", calcularPotenciaElectrica(voltaje, corriente));
    break;

    case 5:
    printf("Ingrese la potencia (W): ");
    scanf("%lf", &potencia);
    printf("Ingrese el tiempo (s): ");
    scanf("%lf", &tiempo);
    if(tiempo <= 0){
        printf("seleccione un tiempo mayor a 0");
    }
    else{
        energia = calcularEnergiaElectrica(potencia, tiempo);
    printf("La energia es: %.2f J\n", energia);
    }
    break;

    case 0:
        ejecutarElectricidad = 0;
        break;
    
    default:
    printf("Opcion no valida\n");
        break;
    }
}
}

// ===== FUNCIONES DE ELECTRICIDAD =====

double calcularVoltaje(double corriente, double resistencia)
{
    return corriente * resistencia;
}
double calcularCorriente(double voltaje, double resistencia)
{
    return voltaje / resistencia;
}
double calcularResistencia(double voltaje, double corriente)
{
    return voltaje / corriente;
}
double calcularPotenciaElectrica(double voltaje, double corriente)
{
    return voltaje * corriente;
}
double calcularEnergiaElectrica(double potencia, double tiempo)
{
    return potencia * tiempo;
}
