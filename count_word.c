#include <stdio.h>

#define IN 1
#define OUT 0
#define N 32

int main(void) {
    int c, nl, nw, nc, state;
    char word[N];
    int index = 0;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                word[index] = '\0';
                printf("%s\n", word);
                state = OUT;
                index = 0;
            }
        } else {
            if (state == OUT) {
                state = IN;
                ++nw;
            }
            if (index < N - 1) {
                word[index++] = c;
            }
        }
    }

    if (state == IN) {
        word[index] = '\0';
        printf("%s\n", word);
    }

    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}