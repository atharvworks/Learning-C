// below code is for numbers. we can use chars instead of numbers or any other data type instead of int. 

/*
#include <stdio.h>

int main()
{
    int day;
    printf("Enter day of a week (1-7) : \n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("invalid");
    }
}
    */

// This code is for char    

#include <stdio.h>

int main()
{
    char day;
    printf("Enter day of a week (initial letter) : \n");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("tuesday");
        break;
    case 'w':
        printf("wednesday");
        break;
    case 'T':
        printf("thursday");
        break;
    case 'f':
        printf("friday");
        break;
    case 's':
        printf("saturday");
        break;
    case 'S':
        printf("Sunday");
        break;
    default:
        printf("invalid");
    }
}