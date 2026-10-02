#include <stdio.h>

void reverse(int a[], int n);
void print(int a[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    reverse(arr, 6);
    print(arr, 6);
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int a = arr[i];
        int b = arr[n - i - 1]; // -1 as array as position of array starts form 0 instrad of 1

        arr[i] = b;
        arr[n - i - 1] = a;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}