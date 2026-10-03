#include <stdio.h>

int main()
{
    char name[50]; // put any value as we cannot keep it empty

    printf("Enter your name :");
    scanf("%s", name);

    printf("your name is : %s", name);

    return 0;
}