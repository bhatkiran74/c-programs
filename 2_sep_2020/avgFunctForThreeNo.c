#include <stdio.h>
float avgFunct(float x, float y, float z);
int main()
{
    float x, y, z;
    printf("\nEnter Three numbers x,y,z: ");
    scanf("%f%f%f", &x, &y, &z);
    printf("\nAvarage of %0.0f,%0.0f,%0.0f is %0.2f ", x, y, z, avgFunct(x, y, z));

    return 0;
}
float avgFunct(float x, float y, float z)
{
    return (x + y + z) / 3;
}
