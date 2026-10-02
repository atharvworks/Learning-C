#include <stdio.h>

void tables(int arr[][10], int n, int m, int num);
int main()
{
    int arr[2][10];
    tables(arr, 0, 10, 2);
    tables(arr, 1, 10, 3);
    printf("table of 2 is : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", arr[0][i]);
    }
    printf("\ntable of 3 is : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", arr[1][i]);
    }

    return 0;
}

void tables(int arr[][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = num * (i + 1);
    }
}

// gpt
/*#include <stdio.h>

void table2(int t[][10], int n);
void table3(int t[][10], int n);

int main() {
    int t[2][10];

    table2(t, 10);
    table3(t, 10);

    printf("Table of 2 is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", t[0][i]);
    }

    printf("\n\nTable of 3 is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", t[1][i]);
    }

    return 0;
}

void table2(int t[][10], int n) {
    for (int i = 0; i < n; i++) {
        t[0][i] = 2 * (i + 1);
    }
}

void table3(int t[][10], int n) {
    for (int i = 0; i < n; i++) {
        t[1][i] = 3 * (i + 1);
    }
}*/

// mistake
/*#include <stdio.h>

void table2(int t[0][], int n );
void table3(int t[1][], int n );
int main(){
    int t[2][10];
    printf("Table of 2 is : \n");
    table2(t , 10);


    printf("Table of 3 is : \n");
    table3(t , 10);

    return 0;

}

void table2 (int t[0][], int n){
    for (int i = 0 ; i<10 ; i++){
        t[0][i] = 2 * (i+1);
        printf("%d \t", t[0][i] );
    }
}

void table3 (int t[1][], int n){
    for (int i = 0 ; i<10 ; i++){
        t[1][i] = 3 * (i+1);
        printf("%d \t", t[1][i]);
    }
}*/