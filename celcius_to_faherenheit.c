#include <stdio.h>

float temp(float n);

int main()
{
    float n;
    printf("Enter temp in celcius :");
    scanf("%f", &n);

    printf("\n Temp in fahrenit is : %f", temp(n));
}

float temp(float n)
{

    float m = (n * (9.0 / 5)) + 32;
    return m;
}