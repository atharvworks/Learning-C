#include <stdio.h>

int main()
{
    int n = 0, i;

    printf("Enter odd number : \n");
    scanf("%d", &n);

    i = n % 2;

    while (i == 0)
    {
        printf("This is not an odd number, enter odd number : \n");
        scanf("%d", &n);
        i = n % 2;
    }
    printf("%d is a odd number. \n", n);
    return 0;
}