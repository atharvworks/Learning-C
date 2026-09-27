#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Character :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
    else
    {
        printf("Not a english char");
    }
    return 0;
}