#include <stdio.h>
int main()
{
    int r, c;
    int i, j;
    printf("\nEnter row And Col : ");
    scanf("%d%d", &r, &c);

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}