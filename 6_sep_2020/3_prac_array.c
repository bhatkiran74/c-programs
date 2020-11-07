#include <stdio.h>

int main()
{
    int n;
    int arr[10];
    printf("\nEnter the Number which you want multiplication table : ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d * %d =%d ", n, i + 1, arr[i]);
    }

    return 0;
}