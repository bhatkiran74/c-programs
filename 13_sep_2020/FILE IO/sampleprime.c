#include <stdio.h>

int main()
{

    int n, i;
    printf("\nEnter number to check prime or not : ");
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
        printf("\n%d is prime ", n);
    }
    else
    {
        printf("\n%d is not  prime ", n);
    }

    return 0;
}