#ifndef ZODIAC_H
#define ZODIAC_H

// Chinese Zodiac signs
typedef enum { 
    RAT = 0, OX, TIGER, RABBIT, DRAGON, SNAKE, HORSE, GOAT, MONKEY, ROOSTER, DOG, PIG 
} zSign;

// Birthdate structure
typedef struct {
    unsigned int month;
    unsigned int day;
    unsigned int year;
} zodiacDate;

// Function declarations
zSign getZNum(zodiacDate zDate);
const char* getSignName(zSign zNum);
int isCompatible(zSign s1, zSign s2);

#endif
