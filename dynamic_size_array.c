//
// Created by Alexander on 25.06.2024.
//

#include <stdio.h>

int main(void) {

    int maxSize = 3;
    int array[maxSize];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    int i;
    for (i = 0; i < maxSize; ++i){
        printf("%d", array[i]);
    }

    return 0;
}