#include<stdio.h>
int main()
{
    int i,n,count,sum;
    i=100;
    do
    {
        i++;
        if (i%7==0)
        {
           printf("%d\n",i);
           sum=sum+i;
           count ++;
        }
        
    } while (i<700);
     printf("%d\n",sum);
     printf("%d\n",count);
    return 0;
    
}