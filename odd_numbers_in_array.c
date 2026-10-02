#include <stdio.h>

void arr_add(int a[], int n);
int arr_odd(int a[], int n, int m);
int main()
{
    int a[5];
    arr_add(a, 5);
    printf("Odd numbers are :%d", arr_odd(a, 5, 0));
}
// store digits to array
void arr_add(int a[], int n)
{
    int k;
    for (int i = 0; i < 5; i++)
    {
        printf("enter number %d : \n", i + 1);
        scanf("%d", &a[i]);
    }
}
// counts odd numbers
int arr_odd(int a[], int n, int m)
{
    for (int i = 0; i < 5; i++)
    {
        if ((a[i] % 2) == 0)
        {
            continue;
        }
        else
        {
            m++;
        }
    }
    return m;
}
