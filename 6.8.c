#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b;
    int c;
    printf("1. Mill Cloth  \n2.Handloom items  \nPlease select 1 / 2 : ");
    scanf("%d", &c);
    printf("Enter Amount : ");
    scanf("%f", &a);
    switch (c)
    {
    case 1:
        if (a <= 0 && a >= 100)
            printf("Amount = %.2f", a);
        else if (a <= 101 && a >= 200)
            printf("Amount = %.2f", a - (a * 5) / 100);
        else if (a <= 201 && a >= 300)
            printf("Amount = %.2f", a - (a * 7.5) / 100);
        else
            printf("Amount = %.2f", a - (a * 10) / 100);
        break;

    case 2:
        if (a <= 0 && a >= 100)
            printf("Amount = %.2f", a - (a * 5) / 100);
        else if (a <= 101 && a >= 200)
            printf("Amount = %.2f", a - (a * 7.5) / 100);
        else if (a <= 201 && a >= 300)
            printf("Amount = %.2f", a - (a * 10) / 100);
        else
            printf("Amount = %.2f", a - (a * 15) / 100);

        break;
    }
    return 0;
}
