#include <stdio.h>

int main()
{

    int i, n;
    printf("\nEnter number is : ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i > n / 2)
    {
        printf("\nPrime");
    }
    else
    {
        printf("\nNO Prime");
    }

    return 0;
}