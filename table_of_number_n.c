#include <stdio.h>

int main()
{
    int n;
    // int i = 1;

    printf("Enter the Number : \n");
    scanf("%d", &n);
    /*
        while(i<=10){
            printf("%d \n",n*i);
            i+=1;
        }
    */
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }

    return 0;
}