#include<stdio.h>
int main()
{
    int y;
    float x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    if (x>0)
    {
        printf("y=%d",1);
    }
    
    else if (x==0)
    {
        printf("y=%d",0);
    }
    
    else if (x<0)
    {
        printf("y=%d",-1);
    }
    
}