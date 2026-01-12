#include "zodiac.h"

// Returns zodiac number for a birthdate
zSign getZNum(zodiacDate zDate) {
    unsigned int year = zDate.year;

    // Dates before Jan 25 count for previous zodiac year
    if (zDate.month == 1 && zDate.day < 25) {
        year--;
    }

    return (zSign)((year - 1924) % 12);
}

// Converts zodiac number to name
const char* getSignName(zSign zNum) {
    switch (zNum) {
        case RAT:     return "rat";
        case OX:      return "ox";
        case TIGER:   return "tiger";
        case RABBIT:  return "rabbit";
        case DRAGON:  return "dragon";
        case SNAKE:   return "snake";
        case HORSE:   return "horse";
        case GOAT:    return "goat/sheep";
        case MONKEY:  return "monkey";
        case ROOSTER: return "rooster";
        case DOG:     return "dog";
        default:      return "pig";
    }
}

// Checks if two zodiac signs are compatible
int isCompatible(zSign s1, zSign s2) {
    int yearDiff = (s1 - s2) % 4;
    return yearDiff == 0;
}
