#include <stdio.h>

int main()
{
    int i = 10, n, m;

    printf("Enter number: \n");
    scanf("%d", &n);

    while (i >= 1)
    {
        m = n * i;
        printf("%d \n", m);
        i--;
    }
    return 0;
}