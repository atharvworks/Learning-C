#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    swap(&x, &y);
    printf("a= %d and b = %d \n", x, y);
    return 0;
}

// call by refrence

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}