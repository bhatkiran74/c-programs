#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("\nEnter the Mass  in kgs ");
    scanf("%f", &m);

    printf("\nForce in newton is %0.1f Newton", force(m));

    return 0;
}
float force(float m)
{

    return (m * 9.8);
}