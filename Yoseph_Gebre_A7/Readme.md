# Chinese Zodiac Compatibility Checker

## Overview
This C program determines a person's Chinese Zodiac sign based on their birthdate and checks compatibility between two people using zodiac cycle rules.

The program prompts the user to enter their own birthdate and a friend’s birthdate, calculates each zodiac sign, displays the sign names, and then evaluates whether the two signs are considered compatible.

---

## Features

### 📅 Date Input & Validation
- Prompts the user for month, day, and year
- Ensures valid ranges for month (1–12) and day (1–31)
- Re-prompts until valid input is entered

### 🐲 Chinese Zodiac Calculation
- Determines the zodiac sign based on birth year
- Adjusts for dates before January 25 (counts as the previous zodiac year)
- Uses a 12-year cycle starting from 1924

### 🏷 Zodiac Name Conversion
- Converts zodiac enumeration values into readable sign names
- Supports all 12 Chinese Zodiac animals

### 🤝 Compatibility Check
- Determines compatibility based on zodiac cycle alignment
- Signs are compatible if their positions align within the cycle pattern

---

## Key Data Types

### `zodiacDate`
```c
typedef struct {
    unsigned int month;
    unsigned int day;
    unsigned int year;
} zodiacDate;

Stores a user’s birthdate.

zSign
typedef enum { 
    RAT, OX, TIGER, RABBIT, DRAGON, SNAKE,
    HORSE, GOAT, MONKEY, ROOSTER, DOG, PIG
} zSign;

Represents the 12 Chinese Zodiac signs.

Main Functions
getValidDate(const char* prompt)

Prompts the user for a birthdate and ensures valid input before returning the date.

getZNum(zodiacDate zDate)

Calculates the zodiac sign number based on the given birthdate.

getSignName(zSign zNum)

Returns the zodiac sign name as a string.

isCompatible(zSign s1, zSign s2)

Determines whether two zodiac signs are compatible.

Sample Output

Let's find your Chinese Zodiac sign. Enter your birthdate:
Month (1-12): 8
Day (1-31): 14
Year: 2001
Oh. You're a snake. How interesting.

Let's find out if your friend is REALLY your friend. Enter their birthdate:
Month (1-12): 3
Day (1-31): 22
Year: 2000
Oh. Your friend is a dragon. Good to know.

The heavens say they are a good friend.

Build & Run Instructions

Compile all source files together:

gcc main.c input.c zodiac.c -o zodiac
./zodiac

Concepts Demonstrated

Structs and enums

Modular program design

Input validation

Switch statements

Arithmetic logic for cycle-based calculations

Header/source file separation

Author

Johnny

Notes

Compatibility rules are based on zodiac cycle alignment logic.

Date validation focuses on basic numeric ranges.

Designed as a console-based interactive program.

This project demonstrates structured programming, user interaction, and logical decision-making in C.
