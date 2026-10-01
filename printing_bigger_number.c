#include <stdio.h>

void num(float a, float *b);

int main()
{
    float a = 50, b = 10;
    num(a, &b);

    printf("Biggest Number is : %f", b);

    return 0;
}

void num(float a, float *b)
{

    if (a > *b)
    {
        *b = a;
    }
}
