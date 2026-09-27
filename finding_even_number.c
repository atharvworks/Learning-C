#include <stdio.h>

int main(){
    int a,b;

    printf("Enter Number : \n");
    scanf("%d", &a);

    b = a % 2;

    if(b == 0){
        printf("Entered number is even.");
    }
    else{
        printf("Entered number is odd.");
    }

    return 0;
}