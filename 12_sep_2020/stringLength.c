#include <stdio.h>
int strLength(char *st)
{

    char *ptr = st;
    int l = 0;

    while (*ptr != '\0')
    {

        l++;
        ptr++;
    }
    return l;
}

int main()
{

    char st[] = "kiransing bhat";
    int l;

    l = strLength(st);
    printf("\n %d is length of string  %s  ", l, st);
    return 0;
}