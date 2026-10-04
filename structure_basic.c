#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int rollno;
    float cgpa;
};
int main()
{   
    struct student s1; // defining new data type in s1 variable

    s1.rollno = 3;
    s1.cgpa = 9.99;

    strcpy(s1.name , "Atharv");

    puts(s1.name);
    printf("%d \n",s1.rollno);
    printf("%f",s1.cgpa);

    return 0;
}