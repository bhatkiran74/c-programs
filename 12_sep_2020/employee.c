#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_no;
    float emp_s;
    char emp_name[10];
};

int main()
{

    struct employee e[5];
    int i = 0;

    while (i != 5)
    {
        printf("\nEnter Employee Nummber : ");
        scanf("%d", &e[i].emp_no);
        printf("\nEnter Employee Salary : ");
        scanf("%f", &e[i].emp_s);
        printf("\nEnter Employee Name : ");
        scanf("%s", e[i].emp_name);
        i++;
    }

    for (int j = 0; j <= 4; j++)
    {
        printf("\n%d\t%s\t%0.2f", e[j].emp_no, e[j].emp_name, e[j].emp_s);
    }

    // printf("\nEnter Employee Nummber : ");
    // scanf("%d", &e[1].emp_no);

    // printf("\nEnter Employee Salary : ");
    // scanf("%f", &e[1].emp_s);
    // printf("\nEnter Employee Name : ");
    // scanf("%s", e[1].emp_name);

    return 0;
}