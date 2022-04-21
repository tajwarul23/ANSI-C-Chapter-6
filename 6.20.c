
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int upper = 0, lower = 0;
    printf("Enter anything : ");
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            lower++;
        if (a[i] >= 'A' && a[i] <= 'Z')
            upper++;
    }
    printf("Uppercase Alphabet = %d\nLowercase Alphabet = %d", upper, lower);
}