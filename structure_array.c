#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[100];
    float cgpa;
};

int main()
{
    struct student ece[100];

    ece[0].rollno = 1664;
    ece[0].cgpa = 9.20;

    strcpy(ece[0].name, "Atharv");

    puts(ece[0].name);
    printf("%d \n", ece[0].rollno);
    printf("%f", ece[0].cgpa);

    return 0;
}