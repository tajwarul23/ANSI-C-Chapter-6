#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z;
    printf("Enter the value of x, y, z : ");
    scanf("%f %f%f", &x, &y, &z);
    if (x*x+y*y == z*z)
        printf("Right Angled Triangle");
    else
        printf("Not A Right Angled Triangle");
    return 0;
}
