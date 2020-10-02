#include <stdio.h>

int main()
{

    int i, a = 1, b = 1;

    i = 1;

    while (i < 50)
    {
        printf("%d,%d ", a, b);
        a = a + b;
        b = a;

        i++;
    }

    return 0;
}