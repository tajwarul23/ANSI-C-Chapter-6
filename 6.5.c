#include<stdio.h>
int main ()
{
    int m,p,c;
    printf("Enter marks of Math,Phy,Che:");
    scanf("%d%d%d",&m,&p,&c);
    if (m>=60 && p>=50 && c>=40)
    {
        printf("Candidate is Eligible");
    }

    else if (m+p+c>=200 || m+p>=150)
    {
        printf("Candidate is Eligible");
    }
    else{
        printf("Candidate is Eligible");
    }
        return 0;
}