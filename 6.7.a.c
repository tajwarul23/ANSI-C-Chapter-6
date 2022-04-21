#include<stdio.h>
int main()
{
    int num,row,col,count=1;
    printf("Enter the row number:");
    scanf("%d",&num);
    for ( row = 0; row <= num; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }
    
}