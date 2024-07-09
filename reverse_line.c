//
// Created by Alexander on 03.07.2024.
//
#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

void reverse(char s[]);
int get_line(char line[], int lim);

int main(void)
{
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
}

void reverse(char s[])
{
    int len = strlen(s);
    int start, end;
    char temp;

    for (start = 0, end = len - 1; start < end; ++start, --end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
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
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}