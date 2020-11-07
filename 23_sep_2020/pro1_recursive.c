#include <stdio.h>

void printNumber(int n)
{
    int r;

    if (n == 0)
    {
        return;
    }

    r = n % 10;

    printNumber(n / 10);
    printf("\t%d", r);
}
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    printNumber(n);

    return 0;
}