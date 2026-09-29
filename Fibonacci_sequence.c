#include <stdio.h>
int fib(int n);

int main()
{
    int n = 7;
    printf("%d", fib(n));
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int a = fib(n - 1);
    int b = fib(n - 2);
    int c = a + b;

    return c;
}