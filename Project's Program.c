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

void cb(){
    int quarry;
    int pro;
    char c[]="yes";
    char b[]="yes";
    char a[6];
    printf("***********************************************************************************************************************\n");
    printf("                                         Welcome to our App chat facility :)\n");
    printf("                                          I am Jarvis the AI chat bot :)\n");
    printf("                                     How can I help you please enter the quarry :)\n");
    printf("Hi:)\n");
    quar();
    while(strcmp(c,b)==0){
        scanf("%d",&quarry);
        if(quarry==1){
            printf("What Problems you are Facing while using this app:)\n");
            prob();
            scanf("%d",&pro);
            if(pro==1){
                printf("                            You Do One thing\n");
                printf("             Close This App and Open it again To avoid this Problem:)\n");
                printf("If After reopening the App it not works wait for sometime maybe our Server is Down:(\n");
                printf("         Sorry for Problems You Faced and Time you Lose while Using App:)\n");
            }
            else if(pro==2){
                printf("                           You Do One thing\n");
                printf("Select or Copy the link and right click the Mouse and open the link in any Browser:)\n");
                printf("         Otherwise Close the App and Open it again to fix this Problem:)\n");
                printf("If After reopening the App it not works wait for sometime maybe our Server is Down:(\n");
                printf("      Sorry for Problems You Faced and Time you Lose while Using the App:)\n");
            }
            printf("\n");
            printf("May I help you with anything else Sir:)\n");
            scanf("%s",c);
            if(strcmp(c,b)==0){
                quar();
            }
        }
        else if(quarry==2){
            printf("Enter you Rating for our service please:)\n");
            printf("How many stars do you want to give us on the scale of 1 to 5:)\n");
            printf("                   * * * * *\n");
            scanf("%s",&a[0]);
            if(strlen(a)<6){
                 printf("Your Rating is %s Thank You for giving us your Rating and Time Sir:)\n",a);
            }
            else{
                printf("Your Rating is Invalid please give us Valid Rating Sir:)\n");
            }
            printf("May I help you with anything else Sir:)\n");
            scanf("%s",c);
            if(strcmp(c,b)==0){
                quar();
            }
        }
        else if(quarry==3){
            printf("Here I have our Coustmer Care Number +91 8797376868 or +91 9708777070 You can Contact Us here:)\n");
            printf("May I help you with anything else Sir:)\n");
            scanf("%s",c);
            if(strcmp(c,b)==0){
                quar();
            }
        }
        else if(quarry==4){
            printf("Thank you Sir for Using our app please Share your Feedback with us have a nice day:)\n");
            over(&c[1]);
        }
    }
}
