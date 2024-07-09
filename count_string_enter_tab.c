//
// Created by Alexander on 24.06.2024.
//
#include <stdio.h>

int main(void)
{
    int cs, c, ce, ct;
    ct = 0;
    cs = 0;
    ce = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n') {
            ++cs;
        }
        if (c == ' ') {
            ++ce;
        }
        if (c == '\t'){
            ++ct;
        }
    }
    printf("%d\n", cs);
    printf("%d\n", ct);
    printf("%d\n", ce);
}