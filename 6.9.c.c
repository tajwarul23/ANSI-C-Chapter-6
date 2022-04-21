#include <stdio.h>
int main()
{
    int y;
    float x;
    printf("Enter the value of x:");
    scanf("%f", &x);
    x<0 ? printf("y=%d", -1) : x> 0 ? printf("y=%d",1):x=0?printf("y=%d",0);
}