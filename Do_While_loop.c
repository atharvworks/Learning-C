#include <stdio.h>

int main(){
    int i=0,sum=0,n;

    printf("Enter the number : \n");
    scanf("%d", &n);

    do{
        sum += i;
        i += 1;
    } while (i <= n);

    printf("sum of %d natural numbers is : %d \n", n , sum);
    return 0;
}