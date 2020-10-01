#include <stdio.h>

int main()
{

    float p, r, n, s; // p principle amount , r rate  n number of year s simple interest

    printf("\nEnter the principle amount : ");
    scanf("%f", &p);
    printf("\nEnter the rate per year and period ");
    scanf("%f%f", &r, &n);

    s = (p * n * r) / 100;
    printf("Simple interest is %0.2f rs ", s);

    return 0;
}