#include <stdio.h>
int main()
{
    int aadhaar[5];
    int *ptr = &aadhaar[0];

    for (int i = 0; i < 5; i++)
    {
        printf("enter value :");
        scanf("%d", &aadhaar[i]);
        // scanf("%d", ptr + i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d \n", i, aadhaar[i]);
        // printf("%d index = %d", i , *ptr + i);
    }
    return 0;
}