#include <stdio.h>

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nValue a[%d] is %d ", i, *(ptr + i));
    }
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(a) / sizeof(2);
    printArray(a, n);

    return 0;
}