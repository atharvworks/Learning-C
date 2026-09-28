#include <stdio.h>

void table(int n);

int main()
{
    int n;

    printf("Enter number :");
    scanf("%d", &n);

    table(n); // actual parameter

    return 0;
}

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
}