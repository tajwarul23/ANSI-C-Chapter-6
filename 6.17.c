#include <stdio.h>
#include <string.h>
int main()
{
    double a, b;
    printf("Enter A & B : ");
    scanf("%lf %lf", &a, &b);
    if (a > b)
        printf("A is greater than B");
    if (a < b)
        printf("B is greater than a");
    else
        printf("A is equal to B");
}