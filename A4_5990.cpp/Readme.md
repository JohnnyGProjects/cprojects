# Geometry & Utility Functions in C++

## Overview
This project is a C++ program that demonstrates **basic mathematical calculations** and **utility functions** using user input.  
It focuses on computing areas and volumes of common shapes, rounding numbers, and finding absolute values.

---

## Program Description
The program performs the following tasks:

- Rounds a user-entered decimal number
- Calculates the area of a circle
- Calculates the volume of a cylinder
- Calculates the volume of a cube
- Computes the absolute value of a number

Each calculation is implemented as a separate function to keep the code modular and easy to understand.

---

## Functions Included

### `calcAreaCircle(double radius)`
Calculates and returns the area of a circle using the formula:
π × radius²

### `calcVolCylinder(double radius, double height)`
Calculates and returns the volume of a cylinder by reusing the circle area function:
(circle area) × height

### `calcVolCube(double length)`
Calculates and returns the volume of a cube:
length³

### `myAbs(double origVal)`
Returns the absolute value of a number using conditional logic.

### `simpleRound(double roundnum)`
Rounds a floating-point number to the nearest whole number using arithmetic and casting.

---

## User Interaction Flow
1. The user enters a decimal number to be rounded.
2. The program displays the rounded result.
3. The user enters values for:
   - Radius
   - Height
   - Length
4. The program calculates and displays:
   - Circle area
   - Cylinder volume
   - Cube volume
5. The user enters a positive or negative number.
6. The program displays the absolute value.

---

## Example Output
Please enter a non whole number:
69.8
The rounded value for 69.800000 is 70

Please enter a radius a height and length for the shapes:
1
2
3
The circle of radius 1.000000 has area 3.141590
The cylinder of radius 1.000000 and height 2.000000 has volume 6.283180
The cube of length 3.000000 has volume 27.000000

Now, enter a number that is positive or negative:
-5
The value you placed -5.000000 and its absolute value 5.000000

---

## Concepts Demonstrated
- Functions and return values
- Constants
- User input with `scanf_s`
- Mathematical formulas
- Rounding and casting
- Conditional logic
- Modular program structure

---

## Build & Run
Compile and run using a standard C++ compiler:

```bash
g++ main.cpp -o geometry_utils
./geometry_utils
Author

Johnny

Notes

This project emphasizes clear function design, reuse of calculations, and interactive user input to demonstrate core C++ programming concepts.
