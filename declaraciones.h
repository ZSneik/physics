#ifndef DECLARACIONES_H
#define DECLARACIONES_H

// ===== CINEMÁTICA =====

void menuCinematica(void);

double calcularVelocidad(double distancia, double tiempo);

double calcularDistancia(double velocidad, double tiempo);

double calcularTiempo(double distancia, double velocidad);

double calcularAceleracion(double velocidadFinal, double velocidadInicial, double tiempo);

double calcularVelocidadFinal(double velocidadInicial, double aceleracion, double tiempo);

double calcularVelocidadInicial(double velocidadFinal, double aceleracion, double tiempo);

// ===== DINÁMICA =====

void menuDinamica(void);

double calcularFuerza(double masa, double aceleracion);

double calcularMasa(double fuerza, double aceleracion);

double calcularAceleracionDinamica(double fuerza, double masa);

double calcularPeso(double masa);

// ===== ELECTRICIDAD =====

void menuElectricidad(void);

double calcularVoltaje(double corriente, double resistencia);

double calcularCorriente(double voltaje, double resistencia);

double calcularResistencia(double voltaje, double corriente);

double calcularPotenciaElectrica(double voltaje, double corriente);

double calcularEnergiaElectrica(double potencia, double tiempo);

// ===== ENERGÍA =====

void menuEnergia(void);

double calcularEnergiaCinetica(double masa, double velocidad);

double calcularEnergiaPotencial(double masa, double altura);

double calcularTrabajo(double fuerza, double distancia);

double calcularPotenciaMecanica(double trabajo, double tiempo);

//=====================================CONVERSORES===================================================

void menuConversiones(void);

void menuDistancias(void);

void menuMasa(void);

void menuTiempo(void);

void menuVelocidad(void);

void menuTemperatura(void);

//=======DISTANCIAS========

double calcularMetrosAKilometros(double metros);

double calcularKilometrosAMetros(double kilometros);

double calcularMetrosACentimetros(double metros);

double calcularCentimetrosAMetros(double centimetros);

double calcularMetrosAMilimetros(double metros);

double calcularMilimetrosAMetros(double milimetros);

double calcularKilometrosAMillas(double kilometros);

double calcularMillasAKilometros(double millas);

double calcularPiesAMetros(double pies);

double calcularMetrosAPies(double metros);


//=======MASA========

double calcularKilogramosAGramos(double kilogramos);

double calcularGramosAKilogramos(double gramos);


//=======TIEMPO========

double calcularSegundosAMinutos(double segundos);

double calcularMinutosASegundos(double minutos);

double calcularMinutosAHoras(double minutos);

double calcularHorasAMinutos(double horas);


//=======VELOCIDAD========

double calcularMetrosSegundoAKilometrosHora(double velocidad);

double calcularKilometrosHoraAMetrosSegundo(double velocidad);


//=======TEMPERATURA========

double calcularCelsiusAKelvin(double celsius);

double calcularKelvinACelsius(double kelvin);

double calcularCelsiusAFahrenheit(double celsius);

double calcularFahrenheitACelsius(double fahrenheit);

#endif