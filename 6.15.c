#include <stdio.h>
#include <math.h>
int main()
{
    double a, result, b;
    char c;
    printf("Enter the Operator(sine,cosine,tengent) \tOnly first alphabet : ");
    fflush(stdin);
    scanf("%c", &c);
    printf("Enter the Radian Value : ");
    scanf("%lf", &a);

    if (c == 's' || c == 'S')
        printf("Sine(%.2lf) = %.2lf", a, sin(a));
    else if (c == 'c' || c == 'C')
        printf("Cosine(%.2lf) = %.2lf", a, cos(a));
    else if (c == 't' || c == 'T')
        printf("Tangent(%.2lf) = %.2lf", a, tan(a));
}