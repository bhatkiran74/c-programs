#include <stdio.h>

int main()
{

    int mark[4];
    int *ptr = &mark[0];

    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter the value %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter the value %d is %d", i + 1, mark[i]);
    }
    return 0;
}