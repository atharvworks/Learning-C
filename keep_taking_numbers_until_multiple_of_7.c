#include <stdio.h>

int main()
{

    int n = 0, i;

    printf("Enter number multiple of 7 :");
    scanf("%d", &n);

    i = n % 7;

    while (i != 0)
    {
        printf("%d entered number is not multiple of 7, enter new number : \n", n);
        scanf("%d", &n);

        i = n % 7;
    }
    printf("%d is a multiple of 7", n);

    return 0;
}