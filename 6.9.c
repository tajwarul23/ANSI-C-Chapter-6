#include<stdio.h>
int main(){
    int y;
    float x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    

    if (x>=0)
    {
        if (x>0)
        {
            printf("y=%d",1);
        
        }
        else{
            printf("y=%d",0);
        }
        
    }
 if (x<0 && x!=0)
    {
        printf("y=%d",-1);
    }
    
    
}