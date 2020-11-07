#include <stdio.h>
#define MAX 100

void printNumber(int n)
{
    int r;
    int a[MAX];
    int i = 0, j;

    while (n)
    {
        r = n % 10;
        a[i] = r;
        i++;
        n = n / 10;
    }
    for (j = i - 1; j > -1; j--)
    {
        printf("\t%d", a[j]);
    }
}
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    printNumber(n);

    return 0;
}