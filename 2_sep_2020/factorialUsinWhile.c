#include <stdio.h>

int main()
{

    int i, num, fact = 1; //variable for i , num: number , fact
    printf("\nEnter Number : ");
    scanf("%d", &num);
    i = num;

    while (i <= num && i >= 1)
    {
        fact = fact * i;
        i--;
    }
    printf("\nFactorial of %d is %d", num, fact);
    return 0;
}