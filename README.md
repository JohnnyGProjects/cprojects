# C Projects Repository (`cprojects`)

## Overview
This repository contains a collection of C and C++ programming projects developed to practice core programming concepts such as arithmetic operations, control flow, functions, input/output, arrays, structs, enums, modular design, and user interaction.

Each project focuses on a specific problem or concept and is implemented as a standalone console application.

---

## 📁 Projects Included

### 1. Student ID Digit Analyzer
**Description:**  
Analyzes a hardcoded student ID number and extracts individual digits using arithmetic operations.

**Key Features:**
- Uses division and modulo to isolate digits
- Demonstrates integer arithmetic and arrays
- Outputs each digit in a formatted sentence

**Concepts Used:**
- Integer math
- Arrays
- Conditional logic
- Console output

---

### 2. Geometry Calculator (C)
**Description:**  
Calculates areas and volumes of common geometric shapes using functions.

**Shapes Covered:**
- Circle (area)
- Cylinder (volume)
- Sphere (three different implementations)
- Cube (volume)

**Concepts Used:**
- Functions
- Global constants
- Floating-point arithmetic
- Comparison of calculation approaches

---

### 3. Geometry & Utilities Program (C++)
**Description:**  
An interactive program that performs geometric calculations and numerical utilities based on user input.

**Features:**
- Circle area, cylinder volume, and cube volume
- Custom absolute value function
- Custom rounding function
- User input and formatted output

**Concepts Used:**
- Functions
- User input/output
- Casting
- Mathematical logic

---

### 4. Rounding, Change Checker & Super Bowl Converter
**Description:**  
A multi-purpose program combining rounding logic, exact change checking, and Roman numeral conversion for Super Bowl numbers.

**Features:**
- Custom rounding for positive and negative numbers
- Exact change validation (divisible by 5)
- Converts Super Bowl numbers (1–100) into Roman numerals
- Includes assertions for testing correctness

**Concepts Used:**
- Ternary operators
- Assertions
- Switch statements
- Modular arithmetic
- String handling

---

### 5. Chinese Zodiac Compatibility Checker
**Description:**  
Determines Chinese Zodiac signs based on birthdates and checks compatibility between two people.

**Features:**
- User input with validation
- Zodiac sign calculation with date adjustment
- Sign name conversion
- Compatibility logic based on zodiac cycles


**Concepts Used:**
- Structs
- Enums
- Modular programming
- Input validation
- Logical comparisons

---

## 🛠 Technologies Used
- C
- C++
- Standard libraries (`stdio.h`, `math.h`, `cassert`)
- Console-based input/output

---

## 🚀 How to Compile & Run

Compile individual projects using `gcc` or `g++` depending on the file type.

**Example (C):**
```bash
gcc main.c -o program
./program

g++ main.cpp -o program
./program
For multi-file projects (e.g., Zodiac):

bash
Copy code
gcc main.c input.c zodiac.c -o zodiac
./zodiac

🎯 Learning Objectives

These projects demonstrate:

Strong understanding of core C/C++ syntax

Functional decomposition and reuse

User input validation

Mathematical and logical problem-solving

Organized, readable code structure

👨‍💻 Author

Johnny

📄 Notes

Each project is self-contained and can be run independently.

Programs are designed for educational and practice purposes.

Assertions and multiple implementations are used to compare approaches and ensure correctness.
