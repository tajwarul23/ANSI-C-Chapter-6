#include<stdio.h>
#include<math.h>
int main()
{
    float i,j;
    for ( i = 1; i <=9.0; i++)
    {
        for ( j = 0; j <=0.9; j=j+.1)
        {
            printf("%.2f ",sqrt(i+j));
        }
        printf("\n");
    }
    return 0;
}