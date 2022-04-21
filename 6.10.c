#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,y;
    printf("Enter a ,b ,c : ");     scanf("%f %f %f",&a,&b,&c);
    d=sqrt(b*b-4*a*c)/2*a;
    if(a==0) printf("Anything/0 is Error");
    else if(b==0)   printf("Negative value inner root doesn't show the real number.");
    else {
        x=-b+d;     y=-b-d;
    printf("x1 = %.2f\nx2 = %.2f",x,y);
    }
    return 0;
}
