#include <stdio.h>
void namaste();
void banjor();

int main()
{
    char n;
    printf("Enter County Of origin (i for Indian and f for French) : \n");
    scanf("%c", &n);

    if (n == 'i')
    {
        namaste();
    }
    else if (n == 'f')
    {
        banjor();
    }
}

void namaste()
{
    printf("Namaste");
}

void banjor()
{
    printf("Banjor");
}