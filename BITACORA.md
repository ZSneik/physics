# Bitácora de desarrollo — Physics Calculator

## Inicio del proyecto

Este proyecto comenzó como una forma de poner en práctica los conocimientos que estaba adquiriendo en C mediante el curso de Ira Pohl.

La idea inicial fue crear una calculadora sencilla de fórmulas físicas utilizando principalmente los conceptos que ya había aprendido, en lugar de intentar implementar características demasiado avanzadas para mi nivel.

Desde el comienzo decidí dividir el programa en diferentes archivos según su funcionalidad.

---

## Estructura inicial

Se creó `main.c` como punto de entrada del programa.

La idea fue utilizar el `main` como controlador principal: recibe la opción seleccionada por el usuario y la dirige hacia el módulo correspondiente.

También se creó `declaraciones.h` para centralizar las declaraciones de las funciones utilizadas por los distintos archivos `.c`.

La estructura inicial comenzó a tomar la siguiente forma:

```text
main.c
    │
    ├── Cinemática
    ├── Dinámica
    ├── Electricidad
    └── Energía
```

Esto permitió mantener los cálculos separados del menú principal.

---

## Módulo de Cinemática

Se desarrolló el primer módulo de física: Cinemática.

Se implementaron funciones para calcular:

* Velocidad
* Distancia
* Tiempo
* Aceleración
* Velocidad final
* Velocidad inicial

También se creó un menú propio para seleccionar cada cálculo y regresar posteriormente al menú principal.

Esta etapa permitió practicar especialmente el uso de funciones, parámetros, valores de retorno, `switch` y bucles `while`.

---

## Módulo de Dinámica

Se agregó el módulo de Dinámica.

Se implementaron cálculos relacionados con la segunda ley de Newton:

* Fuerza
* Masa
* Aceleración
* Peso

Durante esta etapa también se trabajó con constantes locales, como la aceleración de gravedad utilizada para calcular el peso.

La separación de los cálculos en funciones permitió mantener el menú independiente de las operaciones matemáticas.

---

## Módulo de Electricidad

Se agregó el módulo de Electricidad.

Se implementaron cálculos relacionados con la ley de Ohm y con relaciones básicas de potencia y energía eléctrica:

* Voltaje
* Corriente
* Resistencia
* Potencia eléctrica
* Energía eléctrica

El módulo fue probado con distintos valores para comprobar que las funciones entregaran los resultados esperados.

---

## Módulo de Energía

Se agregó el módulo de Energía.

Se implementaron funciones para calcular:

* Energía cinética
* Energía potencial gravitatoria
* Trabajo
* Potencia mecánica

Durante esta etapa se reforzó el uso de variables locales, constantes y funciones que reciben valores y retornan resultados.

El módulo fue integrado al menú principal y probado junto con los módulos anteriores.

---

## Decisión sobre vectores

Durante el desarrollo se consideró agregar un módulo de vectores con varias operaciones.

Sin embargo, después de revisar el código, se decidió no incorporarlo todavía.

La razón fue que todavía no había estudiado formalmente vectores y parte de ese código había sido generado principalmente mediante autocompletado.

Se decidió que el proyecto debía representar conocimientos realmente comprendidos y no simplemente aumentar su tamaño.

Por esta razón, el módulo de vectores fue eliminado.

Esta decisión también estableció un criterio para futuras mejoras: agregar nuevas funcionalidades solamente cuando exista una comprensión suficiente de los conceptos necesarios para implementarlas.

---

## Primeros problemas de compilación y enlazado

Durante la incorporación del módulo de conversiones aparecieron errores relacionados con las declaraciones y el enlazado de funciones.

Entre ellos aparecieron mensajes como:

```text
implicit declaration of function
```

y posteriormente:

```text
undefined reference to
```

Esto permitió diferenciar entre dos etapas del proceso de compilación.

El compilador necesita conocer la declaración de una función antes de utilizarla, mientras que posteriormente el enlazador necesita encontrar la implementación de esa función.

Los errores fueron solucionados agregando las declaraciones correspondientes en `declaraciones.h` y desarrollando los menús que todavía no habían sido implementados.

---

## Módulo de Conversiones

Se decidió agregar un módulo de conversiones para transformar unidades que posteriormente podrían ser utilizadas en cálculos físicos.

El módulo fue diseñado con una estructura jerárquica:

```text
Conversiones
    ├── Distancia
    ├── Masa
    ├── Tiempo
    ├── Velocidad
    └── Temperatura
```

Todas las conversiones se mantienen dentro de `conversiones.c`, mientras que cada categoría posee su propio menú.

Se implementaron conversiones de:

### Distancia

* Metros ↔ kilómetros
* Metros ↔ centímetros
* Metros ↔ milímetros
* Kilómetros ↔ millas
* Pies ↔ metros

### Masa

* Kilogramos ↔ gramos

### Tiempo

* Segundos ↔ minutos
* Minutos ↔ horas

### Velocidad

* Metros por segundo ↔ kilómetros por hora

### Temperatura

* Celsius ↔ Kelvin
* Celsius ↔ Fahrenheit

---

## Primer compilado completo

Una vez terminados los módulos y sus correspondientes declaraciones, se compiló el proyecto completo utilizando:

```bash
gcc *.c -Wall -Wextra -o calculadora
```

El programa compiló correctamente y los diferentes módulos fueron probados desde el menú principal.

En este punto, la primera versión funcional de la calculadora quedó terminada.

---

## Estado actual

El proyecto actualmente cuenta con una estructura modular y funcional:

```text
physics/
├── main.c
├── declaraciones.h
├── cinematica.c
├── dinamica.c
├── electricidad.c
├── energia.c
├── conversiones.c
├── BITACORA.md
├── README.md
└── .gitignore
```

La calculadora permite realizar distintos cálculos de física y conversiones de unidades mediante menús interactivos.

Este proyecto representa mi primera experiencia desarrollando un programa relativamente dividido en módulos utilizando C.

La intención es continuar mejorándolo a medida que avance en el aprendizaje del lenguaje, incorporando nuevos conceptos solamente cuando sean comprendidos y tengan una utilidad real dentro del proyecto.
