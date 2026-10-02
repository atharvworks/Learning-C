#include <stdio.h>

void print(char name[]);
int main()
{
    char firstname[] = "ATHARV";
    char lastname[] = "BHANDARE";

    print(firstname);
    print(lastname);
    return 0;
}

void print(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
}
