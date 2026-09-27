#include <stdio.h>

int main()
{
    int n, m = 1;

    printf("Enter number :\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }

    printf("Factorial of number %d is : %d \n", n, m);
    return 0;
}