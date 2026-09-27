#include <stdio.h>

int main()
{
    int n;
    for (int i = 5; i <= 50; i++)
    {
        n = i % 2;
        if (n == 0)
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}