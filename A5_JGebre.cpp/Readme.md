# Rounding, Change Validation & Super Bowl Roman Numerals

## Overview
This C program demonstrates numeric processing, decision logic, and string conversion by implementing three main features:

- Rounding positive and negative decimal numbers
- Determining whether a price can be represented using exact coin change
- Converting Super Bowl numbers into Roman numerals

The program also includes built-in tests to validate function correctness.

---

## Program Features

### 🔢 Decimal Rounding
A custom rounding function rounds both positive and negative numbers to the nearest whole value using arithmetic logic and the absolute value function.

### 🪙 Exact Change Validation
Checks whether a price (in cents) can be represented using pennies and nickels by verifying divisibility by 5.

### 🏈 Super Bowl Roman Numeral Converter
Converts Super Bowl numbers (0–100) into Roman numeral format using:
- Tens-place conversion (X, XX, XXX, etc.)
- Ones-place conversion (I–IX)
- Combined formatting for full Roman numeral output

---

## Functions Included

### `simpleRound(double roundingval)`
Rounds a number to the nearest integer, correctly handling both positive and negative values.

### `isExactChange(unsigned int Priceofpenny)`
Returns whether a given price can be represented using exact coin denominations.

### `onescolumn(unsigned int sbNum)`
Extracts the ones digit of a number.

### `tenscolumn(unsigned int sbNum)`
Extracts the tens value of a number.

### `superBowlConvertSmall(unsigned int sbNum)`
Converts the ones digit into Roman numerals.

### `superBowlConvertLarge(unsigned int sbNum)`
Converts the tens portion into Roman numerals.

### `superBowlPrinter(unsigned int sbNum)`
Displays the Super Bowl number alongside its Roman numeral representation.

---

## Program Flow
1. Demonstrates rounding using a sample value.
2. Runs assertions to verify rounding correctness.
3. Tests exact-change logic with predefined values.
4. Prompts the user to enter a Super Bowl number (0–100).
5. Converts the input to Roman numerals and prints the result.
6. Displays additional predefined Super Bowl conversions.

---

## Sample Output
The original value -8.400000 and the new value 8

The original price 120 and the new price 1

Enter a year between 0-100
24

This year 24th superbowl is XXIV

---

## Concepts Demonstrated
- Function design and reuse
- Conditional logic and ternary operators
- Modulo arithmetic
- Roman numeral conversion
- Assertions for testing correctness
- User input handling

---

## Build & Run
Compile and run using a standard C compiler:

```bash
gcc main.c -o superbowl
./superbowl
Author

Johnny

Notes

Assertions are used to validate function behavior during execution.

Roman numeral conversion supports values from 0 to 100.

The program separates numeric processing from output formatting for clarity.

This project serves as a practice exercise in numeric logic, string handling, and structured programming.
