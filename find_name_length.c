#include <stdio.h>

int charlen(char name[]);

int main()
{
    char name[100];
    printf("Enter your name :");
    fgets(name, 100, stdin);

    printf("Letters in your name are : %d", charlen(name));
}

int charlen(char name[])
{
    int m = 0;
    int n = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        n++;
        if (name[i] == ' ')
        {
            m++;
        }
    }

    return n - m - 1; // will count null character at last
}