#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("sample.txt", "r");
    if (ptr == NULL)
    {
        printf("\nFile doesnot exist...");
    }
    char c;
    c = fgetc(ptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);

    return 0;
}