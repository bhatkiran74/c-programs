#include <stdio.h>
void swap(int *a, int *b);
int main()
{

    int a, b;
    printf("\nEnter two numbers : ");
    scanf("%d%d", &a, &b);

    printf("\nBefore Swapping Numbers A = %d B = %d", a, b);
    swap(&a, &b);
    printf("\nBefore Swapping Numbers A = %d B = %d", a, b);

    return 0;
}
void swap(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}