#include<stdio.h>
int main()
{
    float r1,r2,unit;
    char name[20];
    printf("Enter your name : ");       gets(name);
    printf("Enter Amount of Unit : ");  scanf("%f",&unit);
    if(unit>=0 && unit<=200)    r1=unit*0.8;
    else if(unit<=300)          r1=unit*0.9;
    else if(unit>300)           r1=unit*1;
    r2=r1+100;
    if(r2>400)  r2=r2+(r2*15)/100;
    printf("%s  :  %.2f",name,r2);

    return 0;
}
