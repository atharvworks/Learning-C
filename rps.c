//rps 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcompchoice();
int getuserchoice();
void checkwinner(int userchoice, int compchoice);  //prototypes

int main(){

    printf("*** ROCK PAPER SCISSORS ***\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");

    int userchoice = getuserchoice();

    int compchoice = getcompchoice();
    switch(userchoice){
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSORS\n");
            break;
    }
    switch(compchoice){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPER\n");
            break;
        case 3:
            printf("Computer chose SCISSORS\n");
            break;
    }

    checkwinner(userchoice , compchoice);


    return 0;
}

int getcompchoice(){
    srand(time(NULL));
    int compochoice =( rand()%3 )+ 1;
    return compochoice;
}

int getuserchoice(){
    int userchoice = 0;
    printf("Enter your choice: ");
    scanf("%d", &userchoice);
    return userchoice;
}

void checkwinner(int userchoice, int compchoice){
    if ((userchoice ==1 && compchoice == 3) || (userchoice == 2 && compchoice == 1) || (userchoice == 3 && compchoice ==2)){
        printf("You won");
    }
    else if(userchoice == compchoice){
        printf("It's a tie");
    }
    else{
        printf("You lost");
    }
}
