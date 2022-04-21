#include <stdio.h>
#include <string.h>
int main()
{
    char mark[10];
    int marks;
    printf("Enter Mark in Percentage : ");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0)
        printf("Invalid Percentage");
    else if (marks >= 80)
        printf("First Division");
    else if (marks >= 60)
        printf("Second Division");
    else if (marks < 60)
        printf("Third Division");
}