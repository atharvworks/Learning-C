// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <string.h>


   struct student {
        int roll_no;
        float cgpa;
        char name [50];



       
   };

int main() {
struct student ece[100];
ece [0].roll_no = 1664;
ece [0].cgpa = 10.0;
    strcpy(ece[0]. name, "darsh");
    printf("name = %s \n", ece[0].name);
    printf("name = %d \n", ece[0].roll_no);
    printf("name = %f \n", ece[0].cgpa);



    return 0;


}
