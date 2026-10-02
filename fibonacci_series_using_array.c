#include <stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("0 \t");
        }
        else if (i == 1)
        {
            printf("1 \t");
        }
        else
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            printf("%d \t", fib[i]);
        }
    }
    return 0;
}