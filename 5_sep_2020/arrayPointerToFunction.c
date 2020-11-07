#include <stdio.h>
void arrayPointer(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nValue %d is %d", i + 1, *(ptr + i));
    }
    *(ptr + 2) = 201;
}
int main()
{

    int arr[7] = {4, 44, 5, 7, 6, 7, 9};
    arrayPointer(arr, 7);

    printf("\n%d : ", arr[2]);
    return 0;
}