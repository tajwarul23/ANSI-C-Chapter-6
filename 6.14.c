#include<stdio.h>
int prime(int a){
    int i,count=0;
    for ( i = 2; i < a; i++)
    {
        if(a%i==0){
            count++;    break;
        } 
    }
    if(count==0){
        return a;
    }  
        
    
}
int main()
{
    int i,a,b;
    for ( i = 100; i < 201; i++)
    {
        a=prime(i);
        if(a!=0){
            printf("%d, ",a);
        }
    }
    
    return 0;
}
