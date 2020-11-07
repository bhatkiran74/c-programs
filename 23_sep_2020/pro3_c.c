//armestrong number

#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;

    printf("\nEnter a number : ");
    scanf("%d", &n);

    temp = n;

    while (n)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
        //
    }
    if (temp == sum)
    {
        printf("\n%d is Armestrong number ", temp);
    }
    else
    {
        printf("\n%d is not arm number: ", temp);
    }

    return 0;
}