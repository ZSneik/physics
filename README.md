# Scientia

## ¿Qué es?

**Scientia** es una calculadora de fórmulas físicas y químicas, junto con herramientas de conversión de unidades, desarrollada en C.

Este es mi primer proyecto de programación en C y fue desarrollado a partir de los conocimientos adquiridos en el curso de C de Ira Pohl, complementados con el uso de herramientas de inteligencia artificial durante el proceso de aprendizaje y desarrollo.

El objetivo principal del proyecto fue aplicar conceptos fundamentales de C mediante un programa práctico, modular y ampliable.

## ¿Qué hace?

Scientia permite realizar diferentes cálculos mediante menús interactivos.

El usuario selecciona el área que desea utilizar e ingresa los datos necesarios para realizar cada operación.

Actualmente incluye los siguientes módulos:

* **Cinemática**
* **Dinámica**
* **Electricidad**
* **Energía**
* **Vectores**
* **Química**

  * Propiedades coligativas
  * Concentraciones
* **Conversión de unidades**

  * Distancia
  * Masa
  * Tiempo
  * Velocidad
  * Temperatura

## ¿Cómo está organizado?

El proyecto está dividido en diferentes archivos `.c` y directorios según su funcionalidad.

`main.c` funciona como punto de entrada y controlador principal del programa. Se encarga de recibir la opción seleccionada por el usuario y dirigirla al módulo correspondiente.

Los cálculos y menús específicos se encuentran separados en sus respectivos archivos, mientras que `declaraciones.h` contiene las declaraciones de las funciones utilizadas por los distintos módulos.

Una organización simplificada del proyecto es:

```text
scientia/
├── main.c
├── declaraciones.h
├── fisica/
├── quimica/
├── conversiones/
├── README.md
├── BITACORA.md
└── .gitignore
```

Esta estructura busca mantener separadas las responsabilidades de cada parte del programa y facilitar su mantenimiento y futura ampliación.

## ¿Cómo se compila?

El proyecto utiliza **GCC** como compilador.

Debido a que los archivos fuente están organizados en diferentes directorios, es necesario incluir todos los archivos `.c` durante la compilación.

### Windows — PowerShell

Desde la carpeta raíz del proyecto:

```powershell
$files = Get-ChildItem -Recurse -Filter *.c | ForEach-Object { $_.FullName }
gcc $files -I. -o Scientia.exe -Wall -Wextra -std=c11
```

Para ejecutar el programa:

```powershell
.\Scientia.exe
```

### Linux

Desde la carpeta raíz del proyecto:

```bash
gcc main.c fisica/*.c quimica/*.c conversiones/*.c -I. -o Scientia -Wall -Wextra -std=c11
```

Para ejecutar el programa:

```bash
./Scientia
```

## ¿Qué conceptos utiliza?

El proyecto utiliza conceptos fundamentales del lenguaje C, entre ellos:

* Variables y tipos de datos
* Funciones
* Parámetros y valores de retorno
* Condicionales
* Bucles `while`
* Estructuras `switch`
* Entrada y salida mediante `scanf` y `printf`
* Separación del código en múltiples archivos `.c`
* Archivos de cabecera `.h`
* Compilación y enlazado mediante GCC

Al tratarse de mi primer proyecto, decidí mantener la implementación dentro de los conceptos que había aprendido hasta ese momento, evitando añadir complejidad innecesaria.

La intención del proyecto es servir como una base sobre la cual continuar desarrollando mis conocimientos de C.

## Estado del proyecto

**Versión actual: 1.0**

Scientia se encuentra en un estado funcional y se mantendrá temporalmente cerrado mientras continúo aprendiendo programación y otros conceptos relacionados con física, electrónica y computación.

El proyecto podrá retomarse en el futuro para incorporar nuevas funcionalidades y aplicar conocimientos adquiridos posteriormente.
