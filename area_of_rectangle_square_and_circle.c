#include <stdio.h>

float square(float a);
float circle(float a);
float rectangle(float a, float b);

int main()
{
    float a = 5.0;
    float b = 10.0;

    printf("area of rectangle is %f", rectangle(a, b));
    printf("area of square is %f", square(a));
    printf("area of circle is %f", circle(a));
    return 0;
}

float square(float a)
{
    return a * a;
}

float circle(float a)
{
    return 3.14 * a * a;
}

float rectangle(float a, float b)
{
    return a * b;
}
