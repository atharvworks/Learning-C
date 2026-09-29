#include <stdio.h>

void calc(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    calc(&x, &y);
    printf("Sum of numbers is : %d \n", x);
    printf("Product of numbers is : %d \n", y);
    printf("Average of numbers is : %d \n", x / 2);

    return 0;
}

// call by refrence

void calc(int *a, int *b)
{
    int t = *a;
    int k = *b;

    *a = t + k;
    *b = t * k;
}

/*

(code as in solution)

#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;

    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}

*/