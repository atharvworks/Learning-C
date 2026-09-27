#include <stdio.h>

int main()
{
    float a;

    printf("Enter Number : \n");
    scanf("%f", &a);

    if (a >= 1 && a == (int)a)
    {
        printf("This is a Natural Number.");
    }
    else
    {
        printf("this is not a natural number.");
    }

    return 0;
}
