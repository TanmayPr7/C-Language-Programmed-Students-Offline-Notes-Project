# This is the basic source code for this C language programmed project

#include <stdio.h>
#include <string.h>

int first(){
    printf("                                              Press 2 to Login:)\n");
    printf("                                             Press 1 to Sign Up:)\n");
    printf("                                          Press 0 to Skip it for now:)\n");
}

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
