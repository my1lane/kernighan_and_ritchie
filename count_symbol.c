//
// Created by Alexander on 24.06.2024.
//

#include <stdio.h>

int main() {

    long nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf ("%ld\n", nc);
    return 0;

}