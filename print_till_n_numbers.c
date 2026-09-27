#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter the number : \n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d \n", i);
        i += 1;
    }
}