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

#endif