#include <stdio.h>

int main()
{

    int c, f; //variable for celcius and farenheat
    printf("\nEnter the temprature in celcius : ");
    scanf("%d", &c);
    f = (c * (9 / 5)) + 32;

    printf("\nHeat in farenheat is : %d and Heat in celcius is %d", c, f);
    return 0;
}