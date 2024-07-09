//
// Created by Alexander on 25.06.2024.
//

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float fahrenheit_to_celsius(int f);

int main(void) {
    int fahrenheit;
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP) {
        printf("%3d %6.1f\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
    }
    return 0;
}

float fahrenheit_to_celsius(int f) {
    return (5.0 / 9.0) * (f - 32);
}
