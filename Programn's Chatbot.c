# This is the basic chatbot program for this project

#include <stdio.h>
#include <string.h>

void quar(){
    printf("Press 1 for (Problem In using App)\n");
    printf("    Press 2 for (Feedback)\n");
    printf("   Press 3 for (Contact Us)\n");
    printf("   Press 4 for  (No,Thanks)\n");
}

void prob(){
              printf("Press 1 if App is not Responding properly:)\n");
    printf("Press 2 if Provided Links Of Notes And Solutions is not Responding:)\n");
}

char over(char c[]){
    char e='n';
    c[1]=e;
}

