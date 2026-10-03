#include <stdio.h>

int main()
{
    char name[100]; // put any value as we cannot keep it empty

    printf("Enter your fullName :");
    fgets(name, 100, stdin);

    puts(name);

    return 0;
}