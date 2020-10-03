#include <stdio.h>

int main()
{
    int i = 10;
    int *j;

    j = &i;

    printf("\nvalue   of i is      [ %d ]", i);
    printf("\nAddress of i is      [ %u ]", j);
    printf("\nAddress of i is      [ %u ]", &i);
    printf("\nValue   at i is      [ %d ]", *(&i));
    printf("\nAdress  of i in j is [ %u ]", j);

    return 0;
}