#include<stdio.h>
int main()
{
 int a,b,c,d,m,n,diff;
 float x1,x2;
 printf("Enter the value of a,b,c,d,m,n:");
 
 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
 diff=(a*d-b*c);
 if (diff!=0)
 {
     x1=(m*d-n*b)/diff;
     x2=(n*a-m*c)/diff;
     printf("\nx1=%f",x1);
     printf("\nx2=%f",x2);
 }
 else{
     printf("%d is =0",diff);
 }
 

    
}