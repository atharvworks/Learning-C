#include <stdio.h>

int sum(int n);

int main()
{
    printf("Factorial is %d", sum(5));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int a = sum(n - 1);
    int b;
    b = a * n;
    return b;
}