#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

int main()
{
    struct student s1; // defining new data type in s1 variable

    s1.rollno = 3;
    s1.cgpa = 9.99;
    strcpy(s1.name, "Atharv");

    puts(s1.name);
    printf("%d \n", s1.rollno);
    printf("%f \n \n", s1.cgpa);

    struct student s2;

    s2.rollno = 4;
    s2.cgpa = 9.00;
    strcpy(s2.name, "Rajat");

    puts(s2.name);
    printf("%d \n", s2.rollno);
    printf("%f \n \n", s2.cgpa);

    struct student s3;
    s3.rollno = 6;
    s3.cgpa = 7.99;
    strcpy(s3.name, "Chamgadad");

    puts(s3.name);
    printf("%d \n", s3.rollno);
    printf("%f \n", s3.cgpa);

    return 0;
}