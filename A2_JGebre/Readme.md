# Student ID Digit Extraction – C Program

## Overview
This project is a **basic C program** that works with an integer student ID and determines each of its digits using arithmetic operations.  
The program demonstrates integer division, modulo operations, conditional logic, and formatted output in C.

---

## Program Description
The program stores a student ID as an integer and analyzes its digits individually:

- The **second and fourth digits** are determined using division and modulo checks.
- The **first and third digits** are calculated using arithmetic logic involving division, multiplication, and remainders.
- The final result prints the student ID along with each digit clearly labeled.

---

## How It Works
- A student ID (`8131`) is stored as an integer.
- An array is used to hold expected digit values.
- Arithmetic operations (`/`, `%`, `*`) are used to extract or validate digit positions.
- Conditional statements determine digit values.
- The program outputs a formatted sentence showing each digit.

---

## Example Output
Student ID 8131 has first digit 8 has second digit 1 has third digit 3 and has fourth digit 1.

---

## Concepts Demonstrated
- Integer division
- Modulo operator
- Conditional statements
- Arrays
- Variable initialization
- Formatted output using `printf`

---

## Build & Run
Compile and run using any standard C compiler:

```bash
gcc main.c -o student_id
./student_id

Author

Johnny

Notes

This program was created for learning and practice purposes to reinforce fundamental C programming concepts involving arithmetic operations and control flow.
