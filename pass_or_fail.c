#include <stdio.h>

int main()
{
    float marks;

    printf("Enter Marks : \n");
    scanf("%f", &marks);

    if (marks > 30)
    {
        printf("Pass");
    }

    else
    {
        printf("Fail");
    }
    return 0;
}