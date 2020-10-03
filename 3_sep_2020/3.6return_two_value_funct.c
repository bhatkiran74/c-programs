#include <stdio.h>
void functionPointer(int a, int b, int *sum, float *avg);
int main()
{
    int a, b, sum;
    float avg;

    printf("\nEnter two no:  ");
    scanf("%d%d", &a, &b);
    functionPointer(a, b, &sum, &avg);

    printf("\nSum of %d and %d is %d and Avarage of %d and %d is %f", a, b, sum, a, b, avg);

    return 0;
}
void functionPointer(int a, int b, int *sum, float *avg)
{

    *sum = a + b;

    *avg = (float)*sum / 2;
}
