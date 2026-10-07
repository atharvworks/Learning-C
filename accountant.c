/*
    Title: Mini Bank Management System

    DON'Ts:
    1. Do not use separate arrays for account details.
    2. Do not use global variables to store account data.
    3. Do not put the entire logic inside main().
    4. Do not allow withdrawal greater than the available balance.
    5. Do not use a hardcoded number of accounts.
    6. Do not create a separate structure for every account.
    7. Do not use file handling.
*/

#include <stdio.h>

struct account
{
    int accountno;
    char name[100];
    float amount;
};

void input(struct account arr[], int n);
void functions(struct account arr[], int n, int choice);

int main()
{
    int n, choice;
    printf("Enter number of accounts: ");
    scanf("%d", &n);
    struct account arr[n];

    input(arr, n);

    printf("Enter one of following choices: \n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Display Account\n");
    printf("4. Search Account\n");
    printf("5. Exit\n");
    scanf("%d", choice);
    functions(arr, n, choice);
    return 0;
}

void input(struct account arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter Details for Account %d \n", i + 1);
        printf("Enter account number: ");
        scanf("%d", &arr[i].accountno);
        getchar();
        printf("\nEnter Name of account holder: ");
        fgets(arr[i].name, 100, stdin);
        printf("Initial amount: ");
        scanf("%f", &arr[i].amount);
    }
}

void functions(struct account arr[], int n, int choice)
{
    int a;

    if (choice == 1)
    {

        printf("Enter account number: ");
        scanf("%d", &a);

        for (int i = 0; arr[i].accountno == a; i++)
        {
        }
    }
}