#include <stdio.h>
#include <math.h>

float square(float n);

int main()
{
    float n, s;

    printf("enter number :");
    scanf("%f", &n);

    s = square(n);
    printf("%f", s);

    return 0;
}

float square(float n)
{
    return pow(n, 2);
}