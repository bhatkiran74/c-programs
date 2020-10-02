#include <stdio.h>
int convertCelIntoFaren(int c);

int main()
{
    int cel;

    printf("\nEnter temprature in celcius : ");
    scanf("%d", &cel);
    printf("\nFarenHeat Temprature is %d ", convertCelIntoFaren(cel));

    return 0;
}
int convertCelIntoFaren(int c)
{
    return (c * (9 / 5)) + 32;
}