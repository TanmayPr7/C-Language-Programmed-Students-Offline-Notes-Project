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

int content(){
    printf("                    Best Platform For Study Notes of Science, Maths and Social Science For Class 4 to 10:)\n\n");
    int class;
    int s;
    int sub;
    int chap;
    int ssub;
    printf("Enter The Class You Want The Notes And Solution of:)");
    scanf("%d",&class);
    if(class==5){
        printf("Press 1 To Get the Notes And Solutions of Maths for Class 5:)\n");
        printf("Press 2 To Get the Notes And Solutions of EVS for Class 5:)->");
        scanf("%d",&sub);
        printf("\n");
        if(sub==1){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 1st Chapter for Class 5:)\n\n");
                printf("Chapter 1st Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1muNKwOfwhZPM8vmoMk_8gpsISqCcws-0\n");
                printf("Solution for chapter 1st Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-1-the-fish-tale/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
             else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 2nd Chapter for Class 5:)\n\n");
                printf("Chapter 2nd Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1MisPJT565elGIeaEaekqdEdXwWTQaZvP\n");
                printf("Solution for chapter 2nd Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-2-shapes-and-angles/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 3rd Chapter for Class 5:)\n\n");
                printf("Chapter 3rd Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1ZBvY-Jnz30pS-FvlmJt0j6yOC6vnpSIb\n");
                printf("Solution for chapter 3rd Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-3-how-many-squares/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
             else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 4th Chapter for Class 5:)\n\n");
                printf("Chapter 4th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1fL5oFBCEGGaAyXl-kH4SJLTqAWS-cOi7\n");
                printf("Solution for chapter 4th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-4-parts-and-wholes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 5th Chapter for Class 5:)\n\n");
                printf("Chapter 5th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1_tTLjMQ_IkxvLNS3GRI6Jmo4JOjG4Pov\n");
                printf("Solution for chapter 5th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-5-does-it-look-the-same/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 6th Chapter for Class 5:)\n\n");
                printf("Chapter 6th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1wWtiIJePfoj85WBjGeaCj5CQncnlCVa9\n");
                printf("Solution for chapter 6th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-6-be-my-multiple-ill-be-your-factor/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 7th Chapter for Class 5:)\n\n");
                printf("Chapter 7th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1LxREqYhGGmf6hY-XptemW8mzJhspxppg\n");
                printf("Solution for chapter 7th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-7-can-you-see-the-pattern/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
             else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 8th Chapter for Class 5:)\n\n");
                printf("Chapter 8th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1_ksdkZSOxpDqTWvfh9nC9jwVJxbgIJi3\n");
                printf("Solution for chapter 8th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-8-mapping-your-way/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 9th Chapter for Class 5:)\n\n");
                printf("Chapter 9th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1oXmYQPEoylD9kLNyErbR5p6wxV_H30GR\n");
                printf("Solution for chapter 9th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-9-boxes-and-sketches/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 10th Chapter for Class 5:)\n\n");
                printf("Chapter 10th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1VYCxLqJurSwN5i277GELykNbTQyNTIOG\n");
                printf("Solution for chapter 10th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-10-tenths-and-hundredths/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 11th Chapter for Class 5:)\n\n");
                printf("Chapter 11th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1bzpmLZF7coSLBbg-FXZO0eaWuvkbUWQ7\n");
                printf("Solution for chapter 11th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-11-area-and-its-boundary/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 12th Chapter for Class 5:)\n\n");
                printf("Chapter 12th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1ndXSkKhrMMfjCyexE2tExa51C3bUT7c5\n");
                printf("Solution for chapter 12th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-12-smart-charts/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 13th Chapter for Class 5:)\n\n");
                printf("Chapter 13th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1EVCd7jQzmHest5E5HlsQFjbiIoYs_TqS\n");
                printf("Solution for chapter 13th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-13-ways-to-multiply-and-divide/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 14th Chapter for Class 5:)\n\n");
                printf("Chapter 14th Maths PDF for class 5\n");
                printf("https://drive.google.com/open?id=1TCp1w8OoSiNKf1czMclR37uv6v3KliUL\n");
                printf("Solution for chapter 14th Maths Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-maths-chapter-14-how-big-how-heavy/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 14 Chapters in Class 5 Maths:)\n");
            }
        }
