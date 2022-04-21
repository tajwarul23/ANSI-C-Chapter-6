#include<stdio.h>
int main()
{
    int sum=0,count=0,i;
    for ( i = 1; i < 101; i++)
    {
       if(i%6==0 && i%4!=0){
           printf("%d   ",i);
           sum=sum+i;
           count++;
       }
    }
    printf("\nCount = %d \nSum = %d ",count,sum);
    
    return 0;
}
