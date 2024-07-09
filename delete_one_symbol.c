//
// Created by Alexander on 04.07.2024.
//

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int lim);
void squeeze(char s[], int c);

int main(void)
{
    char line[MAXLINE];
    while (get_line(line, MAXLINE))
    {
        squeeze(line, 'c');
        printf("%s", line);
    }
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

void squeeze(char s[], int c)
{
    int i, j;
    for (int i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}