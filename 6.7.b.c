#include<stdio.h>
int main()
{
    int row,col;
    for ( row = 1; row <=5; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            if (col%2==0)
            {
                printf("%d",0);
            }
            else{
                printf("%d",1);
            }
        }
        printf("\n");
    }
    
}