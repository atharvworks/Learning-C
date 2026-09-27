#include <stdio.h>

int main()
{
    float marks;
    printf("Enter Marks : \n");
    scanf("%f", &marks);

    if (30 > marks)
    {
        printf("C Grade");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("B Grade");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("A Grade");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("A+ Grade");
    }
    else
    {
        printf("Invalid parameter");
    }
    return 0;
}