#include<stdio.h>
int main()
{
    int a,i=1;
    while (i<=2) {

    printf("Enter Number. Starts from MONDAY=1 : ");
    scanf("%d",&a);
    if(a==1)   { printf("Monday");      break; }
    if(a==2)   { printf("Tuesday");     break; }
    if(a==3)   { printf("Wednesday");   break; } 
    if(a==4)   { printf("Thursday");    break; }
    if(a==5)   { printf("Friday");      break; }
    if(a==6)   { printf("Saturday");    break; } 
    if(a==7)   { printf("Sunday");      break; }
    else { printf("Number should be between 1 to 7\n");    continue;}
    i++;

    }

    return 0;
}
