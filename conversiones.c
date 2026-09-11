#include"declaraciones.h"
#include<stdio.h>


void menuConversiones(void)
{
    char opcionConversiones = 0;
    char ejecutarConversiones = 1;

    while (ejecutarConversiones)
    {
        printf("====================================================\n");
        printf("                     CONVERSIONES\n");
        printf("====================================================\n");
        printf("Seleccione el tipo de conversion que desea realizar\n");
        printf("1. Distancia\n");
        printf("2. Masa\n");
        printf("3. Tiempo\n");
        printf("4. Velocidad\n");
        printf("5. Temperatura\n");
        printf("0. Volver al menu principal\n");

        scanf("%hhd", &opcionConversiones);
        
        switch (opcionConversiones)
        {
            case 1:
                menuDistancias();
                break;

            case 2:
                menuMasa();
                break;

            case 3:
                menuTiempo();
                break;

            case 4:
                menuVelocidad();
                break;

            case 5:
                menuTemperatura();
                break;

            case 0:
                ejecutarConversiones = 0;
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }
}

void menuDistancias(void)
{
    int opcionDistancia = 0;
    char ejecutarDistancia = 1;
    double valor = 0.0;

    while (ejecutarDistancia)
    {
        printf("====================================================\n");
        printf("                     DISTANCIAS\n");
        printf("====================================================\n");
        printf("Seleccione la conversion que desea realizar\n");
        printf("1. Metros a Kilometros\n");
        printf("2. Kilometros a Metros\n");
        printf("3. Metros a Centimetros\n");
        printf("4. Centimetros a Metros\n");
        printf("5. Metros a Milimetros\n");
        printf("6. Milimetros a Metros\n");
        printf("7. Kilometros a Millas\n");
        printf("8. Millas a Kilometros\n");
        printf("9. Pies a Metros\n");
        printf("10. Metros a Pies\n");
        printf("0. Volver a conversiones\n");
        scanf("%d", &opcionDistancia);
        switch (opcionDistancia)
        {
        case 1:
        printf("Ingrese el valor en metros: ");
        scanf("%lf", &valor);
        printf("El valor en kilometros es: %.2f km\n", calcularMetrosAKilometros(valor));
            break;

        case 2:
        printf("Ingrese el valor en kilometros: ");
        scanf("%lf", &valor);
        printf("El valor en metros es: %.2f m\n", calcularKilometrosAMetros(valor));
            break;

        case 3:
        printf("Ingrese el valor en metros: ");
        scanf("%lf", &valor);
        printf("El valor en centimetros es: %.2f cm\n", calcularMetrosACentimetros(valor));
            break;

        case 4:
        printf("Ingrese el valor en centimetros: ");
        scanf("%lf", &valor);
        printf("El valor en metros es: %.2f m\n", calcularCentimetrosAMetros(valor));
            break;

        case 5:
        printf("Ingrese el valor en metros: ");
        scanf("%lf", &valor);
        printf("El valor en milimetros es: %.2f mm\n", calcularMetrosAMilimetros(valor));
            break;

        case 6:
        printf("Ingrese el valor en milimetros: ");
        scanf("%lf", &valor);
        printf("El valor en metros es: %.2f m\n", calcularMilimetrosAMetros(valor));
            break;

        case 7:
        printf("Ingrese el valor en kilometros: ");
        scanf("%lf", &valor);
        printf("El valor en millas es: %.2f mi\n", calcularKilometrosAMillas(valor));
            break;

        case 8:
        printf("Ingrese el valor en millas: ");
        scanf("%lf", &valor);
        printf("El valor en kilometros es: %.2f km\n", calcularMillasAKilometros(valor));
            break; 

         case 9:
         printf("Ingrese el valor en pies: ");
         scanf("%lf", &valor);
         printf("El valor en metros es: %.2f m\n", calcularPiesAMetros(valor));
            break;

        case 10:
         printf("Ingrese el valor en metros: ");
         scanf("%lf", &valor);
         printf("El valor en pies es: %.2f ft\n", calcularMetrosAPies(valor));
            break;

        case 0:
            ejecutarDistancia = 0;
            break;
        
        default:
            break;
        }
    }
}
void menuMasa(void)
{
    char opcionMasa = 0;
    char ejecutarMasa = 1;
    double valor = 0.0;

    while (ejecutarMasa)
    {
        printf("====================================================\n");
        printf("                     MASA\n");
        printf("====================================================\n");
        printf("Seleccione la conversion que desea realizar\n");
        printf("1. Kilogramos a Gramos\n");
        printf("2. Gramos a Kilogramos\n");
        printf("0. Volver a conversiones\n");
        scanf("%hhd", &opcionMasa);

        switch (opcionMasa)
        {
        case 1:
        printf("Ingrese el valor en kilogramos: ");
        scanf("%lf", &valor);
        printf("El valor en gramos es: %.2f g\n", calcularKilogramosAGramos(valor));
            break;
        case 2:
        printf("Ingrese el valor en gramos: ");
        scanf("%lf", &valor);
        printf("El valor en kilogramos es: %.2f kg\n", calcularGramosAKilogramos(valor));
            break;
        case 0:
        ejecutarMasa = 0;
        break;

        default:
        printf("Opcion no valida\n");
            break;
        }
    }
}
void menuTiempo(void)
{
    char opcionTiempo = 0;
    char ejecutarTiempo = 1;
    double valor = 0.0;

    while (ejecutarTiempo)
    {
        printf("====================================================\n");
        printf("                     TIEMPO\n");
        printf("====================================================\n");
        printf("Seleccione la conversion que desea realizar\n");
        printf("1. Segundos a Minutos\n");
        printf("2. Minutos a Segundos\n");
        printf("3. Minutos a Horas\n");
        printf("4. Horas a Minutos\n");
        printf("0. Volver a conversiones\n");
        scanf("%hhd", &opcionTiempo);

        switch (opcionTiempo)
        {
        case 1:
            printf("Ingrese el valor en segundos: ");
            scanf("%lf", &valor);
            printf("El valor en minutos es: %.2f min\n", calcularSegundosAMinutos(valor));
            break;
        
        case 2:
            printf("Ingrese el valor en minutos: ");
            scanf("%lf", &valor);
            printf("El valor en segundos es: %.2f s\n", calcularMinutosASegundos(valor));
            break;

        case 3:
            printf("Ingrese el valor en minutos: ");
            scanf("%lf", &valor);
            printf("El valor en horas es: %.2f h\n", calcularMinutosAHoras(valor));
            break;

        case 4:
            printf("Ingrese el valor en horas: ");
            scanf("%lf", &valor);
            printf("El valor en minutos es: %.2f min\n", calcularHorasAMinutos(valor));
            break;

        case 0:
            ejecutarTiempo = 0;
            break;
        
        default:
        printf("Opcion no valida\n");
            break;
        }
    }
}
void menuVelocidad(void)
{
    char opcionVelocidad = 0;
    char ejecutarVelocidad = 1;
    double valor = 0.0;

    while (ejecutarVelocidad)
    {
        printf("====================================================\n");
        printf("                     VELOCIDAD\n");
        printf("====================================================\n");
        printf("Seleccione la conversion que desea realizar\n");
        printf("1. Metros/Segundo a Kilometros/Hora\n");
        printf("2. Kilometros/Hora a Metros/Segundo\n");
        printf("0. Volver a conversiones\n");
        scanf("%hhd", &opcionVelocidad);

        switch (opcionVelocidad)
        {
        case 1:
            printf("Ingrese el valor en metros/segundo: ");
            scanf("%lf", &valor);
            printf("El valor en kilometros/hora es: %.2f km/h\n", calcularMetrosSegundoAKilometrosHora(valor));
            break;
        
        case 2:
            printf("Ingrese el valor en kilometros/hora: ");
            scanf("%lf", &valor);
            printf("El valor en metros/segundo es: %.2f m/s\n", calcularKilometrosHoraAMetrosSegundo(valor));
            break;

        case 0:
            ejecutarVelocidad = 0;
            break;
        
        default:
        printf("Opcion no valida\n");
            break;
        }
    }
}
void menuTemperatura(void)
{
    char opcionTemperatura = 0;
    char ejecutarTemperatura = 1;
    double valor = 0.0;

    while (ejecutarTemperatura)
    {
        printf("====================================================\n");
        printf("                     TEMPERATURA\n");
        printf("====================================================\n");
        printf("Seleccione la conversion que desea realizar\n");
        printf("1. Celsius a Kelvin\n");
        printf("2. Kelvin a Celsius\n");
        printf("3. Celsius a Fahrenheit\n");
        printf("4. Fahrenheit a Celsius\n");
        printf("0. Volver a conversiones\n");
        scanf("%hhd", &opcionTemperatura);

        switch (opcionTemperatura)
        {
        case 1:
            printf("Ingrese el valor en Celsius: ");
            scanf("%lf", &valor);
            printf("El valor en Kelvin es: %.2f K\n", calcularCelsiusAKelvin(valor));
            break;
        
        case 2:
            printf("Ingrese el valor en Kelvin: ");
            scanf("%lf", &valor);
            printf("El valor en Celsius es: %.2f °C\n", calcularKelvinACelsius(valor));
            break;

        case 3:
            printf("Ingrese el valor en Celsius: ");
            scanf("%lf", &valor);
            printf("El valor en Fahrenheit es: %.2f °F\n", calcularCelsiusAFahrenheit(valor));
            break;

        case 4:
            printf("Ingrese el valor en Fahrenheit: ");
            scanf("%lf", &valor);
            printf("El valor en Celsius es: %.2f °C\n", calcularFahrenheitACelsius(valor));
            break;

        case 0:
            ejecutarTemperatura = 0;
            break;
        
        default:
        printf("Opcion no valida\n");
            break;
        }
    }
}
//===========FUNCIONES DE CONVERSION=====

    //=======DISTANCIAS========

double calcularMetrosAKilometros(double metros)
{
    return metros / 1000.0;
}

double calcularKilometrosAMetros(double kilometros)
{
    return kilometros * 1000.0;
}

double calcularMetrosACentimetros(double metros)
{
    return metros * 100.0;
}

double calcularCentimetrosAMetros(double centimetros)
{
    return centimetros / 100.0;
}

double calcularMetrosAMilimetros(double metros)
{
    return metros * 1000.0;
}

double calcularMilimetrosAMetros(double milimetros)
{
    return milimetros / 1000.0;
}

double calcularKilometrosAMillas(double kilometros)
{
    return kilometros * 0.621371;
}

double calcularMillasAKilometros(double millas)
{
    return millas / 0.621371;
}

double calcularPiesAMetros(double pies)
{
    return pies * 0.3048;
}

double calcularMetrosAPies(double metros)
{
    return metros / 0.3048;
}

//======MASA======

double calcularKilogramosAGramos(double kilogramos)
{
    return kilogramos * 1000.0;
}

double calcularGramosAKilogramos(double gramos)
{
    return gramos / 1000.0;
}

//=====TIEMPO======

double calcularSegundosAMinutos(double segundos)
{
    return segundos / 60.0;
}

double calcularMinutosASegundos(double minutos)
{
    return minutos * 60.0;
}

double calcularMinutosAHoras(double minutos)
{
    return minutos / 60.0;
}

double calcularHorasAMinutos(double horas)
{
    return horas * 60.0;
}

//=====VELOCIDAD======

double calcularMetrosSegundoAKilometrosHora(double velocidad)
{
    return velocidad * 3.6;
}

double calcularKilometrosHoraAMetrosSegundo(double velocidad)
{
    return velocidad / 3.6;
}

//=====TEMPERATURA======

double calcularCelsiusAKelvin(double celsius)
{
    return celsius + 273.15;
}

double calcularKelvinACelsius(double kelvin)
{
    return kelvin - 273.15;
}

double calcularCelsiusAFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

double calcularFahrenheitACelsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}