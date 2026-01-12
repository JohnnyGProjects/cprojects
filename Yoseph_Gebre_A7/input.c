#include "input.h"
#include <stdio.h>

// Get a valid birthdate from the user
zodiacDate getValidDate(const char* prompt) {
    zodiacDate date;
    int valid = 0;

    printf("%s\n", prompt);

    do {
        printf("Month (1-12): ");
        scanf("%u", &date.month);

        printf("Day (1-31): ");
        scanf("%u", &date.day);

        printf("Year: ");
        scanf("%u", &date.year);

        valid = (date.month >= 1 && date.month <= 12) &&
                (date.day >= 1 && date.day <= 31);

        if (!valid)
            printf("Invalid date, try again.\n");

    } while (!valid);

    return date;
}
