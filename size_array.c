//
// Created by Alexander on 25.06.2024.
//
#include <stdio.h>

int main(void) {

    int numbers [] = {5, 7, 7};
    size_t size = sizeof(numbers);
    size_t count = sizeof(numbers) / sizeof(numbers[0]);
    printf("numbers size: %zu \n", size);       // numbers size: 12
    printf("numbers count: %zu \n", count);         // numbers count: 3
    return 0;
}