#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    // if (n % 2 == 0)
    // {
    //     printf("NUMBER IS EVEN");
    // }
    // else if (n % 2 != 0)
    // {
    //     printf("NUMBER IS ODD");
    // }
    (n%2==0)?printf("Number is even"):printf("Number is odd");
}
