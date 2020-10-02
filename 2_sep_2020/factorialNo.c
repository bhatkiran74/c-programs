#include <stdio.h>

int main()
{

    int i, num, fact = 1; //variable for i , num: number , fact
    printf("\nEnter Number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d is %d", num, fact);
    return 0;
}