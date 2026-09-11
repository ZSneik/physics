# Physics Calculator

## ¿Qué es?

Esta calculadora de fórmulas físicas y conversión de unidades es mi primer proyecto de programación en C.

El proyecto fue desarrollado a partir de los conocimientos adquiridos en el curso de C de Ira Pohl, complementados con el apoyo de herramientas de inteligencia artificial durante el proceso de aprendizaje y desarrollo.

## ¿Qué hace?

La calculadora permite realizar diferentes cálculos físicos y conversiones de unidades mediante menús interactivos.

El usuario selecciona la operación que desea realizar e ingresa únicamente los datos necesarios para efectuar el cálculo.

Actualmente incluye módulos de:

* Cinemática
* Dinámica
* Electricidad
* Energía
* Conversión de unidades

  * Distancia
  * Masa
  * Tiempo
  * Velocidad
  * Temperatura

## ¿Cómo está organizado?

El proyecto está dividido en diferentes archivos `.c` según su funcionalidad.

El main.c funciona como punto de entrada y como controlador principal del programa. Se encarga de recibir la opción seleccionada por el usuario y dirigirla al módulo correspondiente.

Los cálculos y menús específicos se encuentran separados en sus respectivos archivos, mientras que `declaraciones.h` contiene las declaraciones de las funciones utilizadas por los distintos módulos.

La estructura busca mantener separadas las responsabilidades de cada parte del programa y facilitar su futura ampliación.

## ¿Cómo se compila?

El proyecto utiliza gcc como compilador.

Desde la carpeta del proyecto se puede compilar utilizando:

gcc *.c -Wall -Wextra -o calculadora

Para ejecutar el programa:

./calculadora

En Windows, el ejecutable generado será:

calculadora.exe

## ¿Qué conceptos utiliza?

El proyecto utiliza conceptos fundamentales de C, entre ellos:

* Variables y tipos de datos
* Funciones
* Parámetros y valores de retorno
* Condicionales
* Bucles while
* switch
* Entrada y salida mediante scanf y printf
* Separación del código en múltiples archivos .c
* Archivos de cabecera .h
* Compilación y enlazado mediante gcc

Al tratarse de mi primer proyecto, decidí mantener la implementación dentro de los conceptos que había aprendido hasta ese momento, evitando añadir complejidad innecesaria.

La intención es continuar desarrollándolo a medida que avance en mi aprendizaje de C.
