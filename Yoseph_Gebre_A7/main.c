#include "zodiac.h"
#include "input.h"
#include <stdio.h>

int main() {
    zodiacDate yourDate = getValidDate("Let's find your Chinese Zodiac sign. Enter your birthdate:");
    zSign yourSign = getZNum(yourDate);
    printf("Oh. You're a %s. How interesting.\n\n", getSignName(yourSign));

    zodiacDate friendDate = getValidDate("Let's find out if your friend is REALLY your friend. Enter their birthdate:");
    zSign friendSign = getZNum(friendDate);
    printf("Oh. Your friend is a %s. Good to know.\n\n", getSignName(friendSign));

    if (isCompatible(yourSign, friendSign))
        printf("The heavens say they are a good friend.\n");
    else
        printf("They are not a good friend. Do not associate with them any more.\n");

    return 0;
}
