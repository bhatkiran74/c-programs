#include <stdio.h>

int main()
{

    float r, p = 3.14; //Radius of circlr and p=3.14 value of pi

    printf("\nEnter the Radius of circle: ");
    scanf("%f", &r);
    printf("\nArea Of Circle Is %0.2f", p * r * r);

    return 0;
}