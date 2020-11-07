#include <stdio.h>

int main()
{
    int arr[10];
    arr[2] = 12;
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("\nThese are indecate same values %d ", arr[2]);
        printf("\nThese are indecate same values %d ", *ptr);
    }
    else
    {
        printf("\nThese are  not indecate same values");
    }

    return 0;
}