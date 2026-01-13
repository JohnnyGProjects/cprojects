# Geometry Calculations in C

## Overview
This project is a C program that calculates the **area and volume of common geometric shapes** using separate functions.  
It demonstrates how functions, constants, arithmetic expressions, and return values are used in C.

---

## Program Description
The program performs calculations for the following shapes:

- **Circle** – area
- **Cylinder** – volume
- **Sphere** – volume (using three different implementations)
- **Cube** – volume

A constant value for π is defined and reused across all calculations. The diameter is defined once and shared between functions.

---

## Functions Included

### `circlefunction(double radius)`
Calculates and returns the area of a circle.

### `Cylinderfunction(double radius, double diameter)`
Calculates and returns the volume of a cylinder.

### `spherefunction(double radius)`
Calculates the volume of a sphere using integer arithmetic to demonstrate truncation effects.

### `spherefunction2(double radius)`
Calculates the volume of a sphere with partial casting, showing how casting affects results.

### `spherefunction3(double radius)`
Calculates the volume of a sphere using full floating-point arithmetic for accurate results.

### `cubefunction(double diameter)`
Calculates and returns the volume of a cube.

---

## Output Example
The area of the circle is 3.141590
The area of the cylinder is 6.283180
The volume of the first sphere is 4
The volume of the second sphere is 4
The volume of the third sphere is 4.188787
The volume of the cube is 8.000000

---

## Concepts Demonstrated
- Functions and return values
- Constants (`const`)
- Floating-point vs integer arithmetic
- Casting and precision differences
- Reusable calculations
- Formatted output with `printf`

---

## Build & Run
Compile and run using a standard C compiler:

```bash
gcc main.c -o geometry
./geometry

Author

Johnny

Notes

This program highlights how different calculation approaches can affect numerical results, especially when using integers versus floating-point values.
