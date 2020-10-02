#include <stdio.h>

int main()
{

    int year;

    printf("\nEnter year ");
    scanf("%d", &year);

    (year % 4 == 0) ? printf("\n%d is Leap year", year) : printf("\n%d is not Leap year", year);

    return 0;
}