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
        if(sub==2){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 1st Chapter for Class 5:)\n\n");
                printf("Chapter 1st EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=12E59JE4AVwmxXmwhiMG717OhDSrh_d7G\n");
                printf("Solution for chapter 1st EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-1-super-senses/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 2nd Chapter for Class 5:)\n\n");
                printf("Chapter 2nd EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1F6WLuuo7MdN6kFO13QeZ3E_2C0qKPCjk\n");
                printf("Solution for chapter 2nd EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-2-a-snake-charmers-story/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 3rd Chapter for Class 5:)\n\n");
                printf("Chapter 3rd EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1bWwO5x8hg5qWO-XIhqibux2YWIMYofZi\n");
                printf("Solution for chapter 3rd EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-3-from-tasting-to-digesting/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 4th Chapter for Class 5:)\n\n");
                printf("Chapter 4th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1qbgQd3rvv58DS14fbaNNrouvcL0K7fDk\n");
                printf("Solution for chapter 4th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-4-mangoes-round-the-year/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 5th Chapter for Class 5:)\n\n");
                printf("Chapter 5th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1qbgQd3rvv58DS14fbaNNrouvcL0K7fDk\n");
                printf("Solution for chapter 5th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-5-seeds-and-seeds/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 6th Chapter for Class 5:)\n\n");
                printf("Chapter 6th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1v4g5RsgqL2SI95gUfDPkBi5YMD9ABTn2\n");
                printf("Solution for chapter 6th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-6-every-drop-counts/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 7th Chapter for Class 5:)\n\n");
                printf("Chapter 7th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1rLowJMJMrHTJmmmoaValgShSqYvYhSKo\n");
                printf("Solution for chapter 7th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-7-experiments-with-water/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 8th Chapter for Class 5:)\n\n");
                printf("Chapter 8th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=15zu3wqKnn-sUc5pqO70HmUTxEfjES4KV\n");
                printf("Solution for chapter 8th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-8-a-treat-for-mosquitoes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 9th Chapter for Class 5:)\n\n");
                printf("Chapter 9th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1PIJQ87lXk9ZrvyLIMMd0v2pZbl_BnedF\n");
                printf("Solution for chapter 9th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-9-up-you-go/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 10th Chapter for Class 5:)\n\n");
                printf("Chapter 10th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1I2ZvrNkadmN9SYz8QFCAMB3WgFmgYFns\n");
                printf("Solution for chapter 10th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-10-walls-tell-stories/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 11th Chapter for Class 5:)\n\n");
                printf("Chapter 11th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1kfphNDO5se_IICKbo_kaA2Yehu5t0ds6\n");
                printf("Solution for chapter 11th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-11-sunita-in-space/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 12th Chapter for Class 5:)\n\n");
                printf("Chapter 12th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=160sQmVkNoktzanyfV5ktwYIWMsQ4-3Ub\n");
                printf("Solution for chapter 12th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-12-what-if-it-finishes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 13th Chapter for Class 5:)\n\n");
                printf("Chapter 13th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=17vepdW31LO8KOSlCU13yxQNN62wMquKh\n");
                printf("Solution for chapter 13th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-13-a-shelter-so-high/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 14th Chapter for Class 5:)\n\n");
                printf("Chapter 14th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=179dIn3BKObbPF-In6skahwYAqCGhRKWk\n");
                printf("Solution for chapter 14th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-14-when-the-earth-shook/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 15th Chapter for Class 5:)\n\n");
                printf("Chapter 15th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=15o3csQDzdaSj6tg9CZF4qZxbPPYQRd9O\n");
                printf("Solution for chapter 15th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-15-blow-hot-blow-cold/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==16){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 16th Chapter for Class 5:)\n\n");
                printf("Chapter 16th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1gpYIt1zE7-sKQmy3roUuRVcnHpFDQOsC\n");
                printf("Solution for chapter 16th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-16-who-will-do-this-work/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==17){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 17th Chapter for Class 5:)\n\n");
                printf("Chapter 17th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=15ReVkG0cu67jFRB3NQeVujM5AoF6LSJT\n");
                printf("Solution for chapter 17th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-17-across-the-wall/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==18){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 18th Chapter for Class 5:)\n\n");
                printf("Chapter 18th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1tusp3LyU8hHzZxNlSINqz9FXrxOWjcrM\n");
                printf("Solution for chapter 18th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-18-no-place-for-us/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==19){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 19th Chapter for Class 5:)\n\n");
                printf("Chapter 19th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1KqimxDIJFQ07l96kpF0GSVAK3Zr48-9t\n");
                printf("Solution for chapter 19th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-19-a-seed-tells-a-farmers-story/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==20){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 20th Chapter for Class 5:)\n\n");
                printf("Chapter 20th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1kOgZvwTTV8Qwky8lGLQ9OMREZ63vld8D\n");
                printf("Solution for chapter 20th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-20-whose-forests/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==21){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 21th Chapter for Class 5:)\n\n");
                printf("Chapter 21th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1hL_ds5ozQ2CuaFHIqixx6-wXFIbQ8cEb\n");
                printf("Solution for chapter 21th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-21-like-father-like-daughter/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==22){
                printf("Here I Have Some Best NCERT Notes And Solution of EVS 22th Chapter for Class 5:)\n\n");
                printf("Chapter 22th EVS PDF for class 5\n");
                printf("https://drive.google.com/open?id=1yD1F9mUKwE1ZsGUQjZZsHDaDaG44Zj-3\n");
                printf("Solution for chapter 22th EVS Class 5\n");
                printf("https://byjus.com/ncert-solutions/ncert-solutions-class-5-evs-chapter-22-on-the-move-again/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 22 Chapters in Class 5 EVS:)\n");
            }
        }
    }
    if(class==6){
        printf("Press 1 To Get the Notes And Solutions of Maths for Class 6:)\n");
        printf("Press 2 To Get the Notes And Solutions of Science for Class 6:)\n");
        printf("Press 3 To Get the Notes And Solutions of Social Science for Class 6:)->");
        scanf("%d",&sub);
        printf("\n");
        if(sub==1){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 1st Chapter for Class 6:)\n\n");
                printf("Chapter 1st Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1Fh8RfgXoYp1d8SoYgsjAYVUwyPlY-_vC\n");
                printf("Solution for chapter 1st Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-1-knowing-our-numbers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 2nd Chapter for Class 6:)\n\n");
                printf("Chapter 2nd Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1PpB0azQIDS-yARWAyWmwGl9KLyvmUJDn\n");
                printf("Solution for chapter 2nd Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-2-whole-numbers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 3rd Chapter for Class 6:)\n\n");
                printf("Chapter 3rd Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1K5AvTsYL585J2CHgc_6mVSPucv8Jvg7N\n");
                printf("Solution for chapter 3rd Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-3-playing-with-numbers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 4th Chapter for Class 6:)\n\n");
                printf("Chapter 4th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1K3mYE_UDeGrV1BvW_obzcIa5xY0qWzHw\n");
                printf("Solution for chapter 4th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-4-basic-geometrical-ideas/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 5th Chapter for Class 6:)\n\n");
                printf("Chapter 5th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1lai6vOr25bdrENOCZI8yXZYVkwpfVJyA\n");
                printf("Solution for chapter 5th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-5-understanding-elementary-shapes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 6th Chapter for Class 6:)\n\n");
                printf("Chapter 6th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1nFIKxLxeIK8aneN0ghbmzvgHi4cIxep5\n");
                printf("Solution for chapter 6th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-6-integers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 7th Chapter for Class 6:)\n\n");
                printf("Chapter 7th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1EaGG40FaU5tnGdSZNz62pVYXrIPBmzoJ\n");
                printf("Solution for chapter 7th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-7-fractions/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 8th Chapter for Class 6:)\n\n");
                printf("Chapter 8th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1KH73AZQiJXJNA3XLJ3Xr4mBZBqzkzmcw\n");
                printf("Solution for chapter 8th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-8-decimals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 9th Chapter for Class 6:)\n\n");
                printf("Chapter 9th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1hPQCYPToCLpGLKnJOMmQrOhPF4IEtcFP\n");
                printf("Solution for chapter 9th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-9-data-handling/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 10th Chapter for Class 6:)\n\n");
                printf("Chapter 10th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1fseX1VNyOAPHDix0LN1JkkHgPvgo2YDb\n");
                printf("Solution for chapter 10th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-10-measurement-and-mensuration/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 11th Chapter for Class 6:)\n\n");
                printf("Chapter 11th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1Dl8HsG4U64ELvMr9KCFzWfqWeHZxtwPj\n");
                printf("Solution for chapter 11th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-11-algebra/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 12th Chapter for Class 6:)\n\n");
                printf("Chapter 12th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1gL6Hbtf7SumlfUhZkQe7DxAgMX0sAirZ\n");
                printf("Solution for chapter 12th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-12-ratio-proportion/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 13th Chapter for Class 6:)\n\n");
                printf("Chapter 13th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1kG_eefW_ti4V4dz4D6u05yVF011hjDFB\n");
                printf("Solution for chapter 13th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-13-introduction-to-symmetry/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 14th Chapter for Class 6:)\n\n");
                printf("Chapter 14th Maths PDF for class 6\n");
                printf("https://drive.google.com/open?id=1enl_-YHfD4UTSwNRvwtZejxpZudylJUz\n");
                printf("Solution for chapter 14th Maths Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-maths/chapter-14-practical-geometry-application/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 14 Chapter in Class 6 Maths:)\n");
            }
        }
        if(sub==2){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 1st Chapter for Class 6:)\n\n");
                printf("Chapter 1st Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1FVG7SwGZDD2Cnpd_ENupk9wFzNeALHaK\n");
                printf("Solution for chapter 1st Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-1-food-where-does-it-come-from/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 2nd Chapter for Class 6:)\n\n");
                printf("Chapter 2nd Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1-vn8nBC1lXwgozwuhb0l2fopQQ0G22VD\n");
                printf("Solution for chapter 2nd Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-2-components-of-food/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 3rd Chapter for Class 6:)\n\n");
                printf("Chapter 3rd Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1iKTDtVRsK9cLzNl7Ou64lOLVF1COFx0o\n");
                printf("Solution for chapter 3rd Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-3-fibre-to-fabric/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 4th Chapter for Class 6:)\n\n");
                printf("Chapter 4th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1oYo6GhNJmylf8lzE_DAknFgt7HO2rt-D\n");
                printf("Solution for chapter 4th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-4-sorting-materials-groups/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 5th Chapter for Class 6:)\n\n");
                printf("Chapter 5th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=15pfRAhXafH3VQjWijIQAb9N-QDTW5_of\n");
                printf("Solution for chapter 5th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-5-separation-of-substances/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 6th Chapter for Class 6:)\n\n");
                printf("Chapter 6th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1Mu4RscQ6xImGKWsezGFh_9uxNHn9xhSV\n");
                printf("Solution for chapter 6th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-6-changes-around-us/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 7th Chapter for Class 6:)\n\n");
                printf("Chapter 7th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1F8170rYqRDIJI2eag45puGwhT3apk4BQ\n");
                printf("Solution for chapter 7th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-7-getting-to-know-plants/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 8th Chapter for Class 6:)\n\n");
                printf("Chapter 8th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1EXgpYIFypXPxEpDpcGSu3ZOG10LShrjH\n");
                printf("Solution for chapter 8th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-8-body-movements/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 9th Chapter for Class 6:)\n\n");
                printf("Chapter 9th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1WoG_SXeIgz1ZmgrQXUYKItpElgW7FVyU\n");
                printf("Solution for chapter 9th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-9-the-living-organisms-their-surroundings/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 10th Chapter for Class 6:)\n\n");
                printf("Chapter 10th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=11Ly-cC4LGyDnhuCam9Cz2jwW15maDEhn\n");
                printf("Solution for chapter 10th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-10-motion-and-measurement-of-distances/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 11th Chapter for Class 6:)\n\n");
                printf("Chapter 11th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1GGaZ-ei7f_DsA5S8N16zUZxhqw9Uknub\n");
                printf("Solution for chapter 11th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-11-light-shadow-and-reflection/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 12th Chapter for Class 6:)\n\n");
                printf("Chapter 12th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1BRJwdKY_VQCflrk67iQ3z0rDB2l_oR3h\n");
                printf("Solution for chapter 12th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-12-electricity-and-circuits/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 13th Chapter for Class 6:)\n\n");
                printf("Chapter 13th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1jVXaxLEPTz59OpxyCSF8lHxWkWsi-_gW\n");
                printf("Solution for chapter 13th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-13-fun-with-magnets/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 14th Chapter for Class 6:)\n\n");
                printf("Chapter 14th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1YYqhg_IVjX2B4VY2lv9HM0vLxfA2rJ0o\n");
                printf("Solution for chapter 14th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-14-water/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 15th Chapter for Class 6:)\n\n");
                printf("Chapter 15th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1G2LlNkwbEoWu4f0reHAOQLLB79GyZHww\n");
                printf("Solution for chapter 15th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-15-air-around-us/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==16){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 16th Chapter for Class 6:)\n\n");
                printf("Chapter 16th Science PDF for class 6\n");
                printf("https://drive.google.com/open?id=1_2CniU9M1P7fKZwIS8szObusvC1q1WWG\n");
                printf("Solution for chapter 16th Science Class 6\n");
                printf("https://byjus.com/ncert-solutions-class-6-science/chapter-16-garbage/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 16 Chapters in Class 6 Science:)\n");
            }
        }
        if(sub==3){
            printf("Press 1 To Get the Notes And Solutions of History for Class 6:)\n");
            printf("Press 2 To Get the Notes And Solutions of Civics for Class 6:)\n");
            printf("Press 3 To Get the Notes And Solutions of Geography for Class 6:)->");
            scanf("%d",&ssub);
            printf("\n");
            if(ssub==1){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 1st Chapter for Class 6:)\n\n");
                    printf("Chapter 1st History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1BHZnQC36TwLrhXsDCZC7LUAUBK4CpkY1\n");
                    printf("Solution for chapter 1st History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-1-what-where-when-how/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 2nd Chapter for Class 6:)\n\n");
                    printf("Chapter 2nd History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1_k2xZNYk92ztU6ceTOTYnKCYOo1R1gux\n");
                    printf("Solution for chapter 2nd History Class 6\n");
                    printf("https://www.vedantu.com/ncert-solutions/ncert-solutions-class-6-social-science-history-our-past-chapter-2\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 3rd Chapter for Class 6:)\n\n");
                    printf("Chapter 3rd History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1GTsgs_WrEhTROajLdrMKMEIVU7-jjOBb\n");
                    printf("Solution for chapter 3rd History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-2-from-hunting-gathering-to-growing-food/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 4th Chapter for Class 6:)\n\n");
                    printf("Chapter 4th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=114xPpFkqs6XxoH72Dm_dRjHys3K9s5I_\n");
                    printf("Solution for chapter 4th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-3-in-the-earliest-cities/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                } 
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 5th Chapter for Class 6:)\n\n");
                    printf("Chapter 5th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1uxeOK4X8r6sgIpkwFOujt59MD91QcWVr\n");
                    printf("Solution for chapter 5th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-4-what-books-and-burials-tell-us/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 6th Chapter for Class 6:)\n\n");
                    printf("Chapter 6th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1ww7q4hFkKKGVtr-wS5Nv2VFW-mD7BPGK\n");
                    printf("Solution for chapter 6th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-5-kingdoms-kings-and-an-early-republic/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 7th Chapter for Class 6:)\n\n");
                    printf("Chapter 7th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1npqvpSCSSwSGWfbTv2geGd4YmWuYcSao\n");
                    printf("Solution for chapter 7th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-6-new-questions-and-ideas/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 8th Chapter for Class 6:)\n\n");
                    printf("Chapter 8th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1War0_WW3ekP4B-0SSvoGHP65bxsiJv0p\n");
                    printf("Solution for chapter 8th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-7-ashoka-the-emperor-who-gave-up-war/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 9th Chapter for Class 6:)\n\n");
                    printf("Chapter 9th History PDF for class 6\n");
                    printf("Chapter 9: Vital Villages, Thriving Towns\n");
                    printf("Solution for chapter 9th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-8-vital-villages-thriving-towns/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==10){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 10th Chapter for Class 6:)\n\n");
                    printf("Chapter 10th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1pTI3VGRKks_8sMyr9aD5W0n4AlSdZ9_h\n");
                    printf("Solution for chapter 10th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-9-traders-kings-and-pilgrims/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==11){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 11th Chapter for Class 6:)\n\n");
                    printf("Chapter 11th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1QqgRFkVfRCmHO7FBnYQetGAgllWT_7tb\n");
                    printf("Solution for chapter 11th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-10-new-empires-and-kingdoms/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==12){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 12th Chapter for Class 6:)\n\n");
                    printf("Chapter 12th History PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1guUuBfKM139UOFTuSrAReyoLTPV5zt8P\n");
                    printf("Solution for chapter 12th History Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-history-chapter-11-buildings-paintings-and-books/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are only 12 Chapters in Class 6 History:)\n");
                }
            }
            if(ssub==2){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 1st Chapter for Class 6:)\n\n");
                    printf("Chapter 1st Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1RFVtqlIIUQGZZ4lTfBqQ1ftmO5ZZl_IU\n");
                    printf("Solution for chapter 1st Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-1-understanding-diversity/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 2nd Chapter for Class 6:)\n\n");
                    printf("Chapter 2nd Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1qUivUb6CbUVem0t0shFAIRmyNKgdMV0q\n");
                    printf("Solution for chapter 2nd Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-2-diversity-and-discrimination/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 3rd Chapter for Class 6:)\n\n");
                    printf("Chapter 3rd Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1nbu4abpdoVrFazAvDsGYTepPBmAyXGVy\n");
                    printf("Solution for chapter 3rd Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-3-what-is-government/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 4th Chapter for Class 6:)\n\n");
                    printf("Chapter 4th Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1R8elt86xoNKPj9YqeQnoIOETtwg25Y0a\n");
                    printf("Solution for chapter 4th Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-4-key-elements-of-a-democratic-government/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 5th Chapter for Class 6:)\n\n");
                    printf("Chapter 5th Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1lS6TQtyMUXXHrzavtwH9SkU5nSmKz5W5\n");
                    printf("Solution for chapter 5th Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-5-panchayati-raj/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 6th Chapter for Class 6:)\n\n");
                    printf("Chapter 6th Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1lG-9khl329tBwc69D681h_MDD3ma0BPE\n");
                    printf("Solution for chapter 6th Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-6-rural-administration/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 7th Chapter for Class 6:)\n\n");
                    printf("Chapter 7th Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1Pcj8NQddBBJJe235yNzK6pAiXprWek3W\n");
                    printf("Solution for chapter 7th Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-7-urban-administration/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 8th Chapter for Class 6:)\n\n");
                    printf("Chapter 8th Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1H5wB-aSTm-vxmvse1dAMWl4ZIx1xtZzf\n");
                    printf("Solution for chapter 8th Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-8-rural-livelihoods/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 9th Chapter for Class 6:)\n\n");
                    printf("Chapter 9th Civics PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1TFPjb-6TIT_4xigSMe-lRuzMHnIEvo8u\n");
                    printf("Solution for chapter 9th Civics Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-civics-chapter-9-urban-livelihoods/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are Only 9 Chapters in Class 6 Civics:)\n");
                }
            }
            if(ssub==3){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 1st Chapter for Class 6:)\n\n");
                    printf("Chapter 1st Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=173bPSe5KRheFmT35ZvAqN-3pJZH3Z94u\n");
                    printf("Solution for chapter 1st Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-1-the-earth-in-the-solar-system/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 2nd Chapter for Class 6:)\n\n");
                    printf("Chapter 2nd Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1xjZfeTyXnYSQoRoE7SOM_ZBnr37SmmTt\n");
                    printf("Solution for chapter 2nd Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-2-globe-latitudes-and-longitudes/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 3rd Chapter for Class 6:)\n\n");
                    printf("Chapter 3rd Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1XOt1Xe-xjXesIGjQn4TwHlaEIvRQy3os\n");
                    printf("Solution for chapter 3rd Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-3-motions-of-the-earth/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 4th Chapter for Class 6:)\n\n");
                    printf("Chapter 4th Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1YVktYJbCtg10X6ZfL4Yw0Ltz4D8hCn7J\n");
                    printf("Solution for chapter 4th Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-4-maps/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 5th Chapter for Class 6:)\n\n");
                    printf("Chapter 5th Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=14QhRqaefT5HInucj-r3bEyRvipf90b3J\n");
                    printf("Solution for chapter 5th Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-5-major-domains-of-the-earth/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 6th Chapter for Class 6:)\n\n");
                    printf("Chapter 6th Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1Rp4CKoWEnXfQzk3BAyzgyhUSgLw2Kr0k\n");
                    printf("Solution for chapter 6th Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-6-major-landforms-of-the-earth/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 7th Chapter for Class 6:)\n\n");
                    printf("Chapter 7th Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1FE2536C-5V5FRtsWRaZ3hPRL3Hi_1yLM\n");
                    printf("Solution for chapter 7th Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-7-our-country-india/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 8th Chapter for Class 6:)\n\n");
                    printf("Chapter 8th Geography PDF for class 6\n");
                    printf("https://drive.google.com/open?id=1cPxArpCl6s2a-zjk1_NFR8oNvViuOLmM\n");
                    printf("Solution for chapter 8th Geography Class 6\n");
                    printf("https://byjus.com/ncert-solutions-class-6-social-science-geography-chapter-8-india-climate-vegetation-and-wildlife/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are Only 8 Chapters in Class 6 Geography:)\n");
                }
            }
        }
    }
    if(class==7){
        printf("Press 1 To Get the Notes And Solutions of Maths for Class 7:)\n");
        printf("Press 2 To Get the Notes And Solutions of Science for Class 7:)\n");
        printf("Press 3 To Get the Notes And Solutions of Social Science for Class 7:)->");
        scanf("%d",&sub);
        printf("\n");
        if(sub==1){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 1st Chapter for Class 7:)\n\n");
                printf("Chapter 1st Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1HgfdCVXK8b5DwwuTV4AFi3DXAajdOfk2\n");
                printf("Solution for chapter 1st Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-1-integers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 2nd Chapter for Class 7:)\n\n");
                printf("Chapter 2nd Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1Qpx4C8zwlN-1sRxwUbYyXX7Od2AGnBZF\n");
                printf("Solution for chapter 2nd Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-2-fractions-and-decimals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 3rd Chapter for Class 7:)\n\n");
                printf("Chapter 3rd Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1HvZJtib_TR0_yKtfqD1lEgBSZTDy_4qp\n");
                printf("Solution for chapter 3rd Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-3-data-handling/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 4th Chapter for Class 7:)\n\n");
                printf("Chapter 4th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1zfLoQndwBCI2vIlgf6q1kX2xeVraMfJ5\n");
                printf("Solution for chapter 4th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-4-simple-equations/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 5th Chapter for Class 7:)\n\n");
                printf("Chapter 5th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1YfuTuRPmJomeJazO6Z1hZCeVkytC8d_G\n");
                printf("Solution for chapter 5th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-5-lines-and-angles/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 6th Chapter for Class 7:)\n\n");
                printf("Chapter 6th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1K7-LqKFv1xgvFGQy6WQdb6mg94q-Rx8-\n");
                printf("Solution for chapter 6th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-6-the-triangles-and-its-properties/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 7th Chapter for Class 7:)\n\n");
                printf("Chapter 7th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=19IpZuAFuAPhcm2wBmId5go-KSzd2nFnE\n");
                printf("Solution for chapter 7th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-7-congruence-of-triangles/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 8th Chapter for Class 7:)\n\n");
                printf("Chapter 8th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1ZbKhNufhu9q1qgQ2ZiNciNoD4VDfCymq\n");
                printf("Solution for chapter 8th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-8-comparing-quantities/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 9th Chapter for Class 7:)\n\n");
                printf("Chapter 9th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1SjjMVEKzNS0GIVrFLGh26F7jIywmv0Qx\n");
                printf("Solution for chapter 9th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-9-rational-numbers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 10th Chapter for Class 7:)\n\n");
                printf("Chapter 10th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=10U9mfJx7KSyRLqLitwPjivBKI9clACQK\n");
                printf("Solution for chapter 10th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-10-practical-geometry/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 11th Chapter for Class 7:)\n\n");
                printf("Chapter 11th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1fGyhWCBUsiPH7QX9wQfHOqOmtWlXj4Zg\n");
                printf("Solution for chapter 11th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-11-perimeter-and-area/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 12th Chapter for Class 7:)\n\n");
                printf("Chapter 12th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1RgyR6sRNIjhfdFNZjK28gRhAmXmsUI2y\n");
                printf("Solution for chapter 12th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-12-algebraic-expressions/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 13th Chapter for Class 7:)\n\n");
                printf("Chapter 13th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1siNhLNPaaFBZWT2DwseJd_j17O8XDeKZ\n");
                printf("Solution for chapter 13th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-13-exponents-and-powers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 14th Chapter for Class 7:)\n\n");
                printf("Chapter 14th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1Razy2pA2cfFEG8MK9OQctkhJdRbpkKRD\n");
                printf("Solution for chapter 14th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-14-symmetry/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 15th Chapter for Class 7:)\n\n");
                printf("Chapter 15th Maths PDF for class 7\n");
                printf("https://drive.google.com/open?id=1utGA8_V8671107xy9w-EjMyP1YPBUiO7\n");
                printf("Solution for chapter 15th Maths Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-maths/chapter-15-visualising-solid-shapes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter correct Chapter number there are only 15 Chapters in Class 7 Maths:)\n");
            }
        }
        if(sub==2){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 1st Chapter for Class 7:)\n\n");
                printf("Chapter 1st Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1uLKpMKNY42lScLgddnk6bPbEvxMwSvfl\n");
                printf("Solution for chapter 1st Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-1-nutrition-in-plants/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 2nd Chapter for Class 7:)\n\n");
                printf("Chapter 2nd Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1L3uVF7V6EjiGC8tfBZVbOjeLUKYsDV-8\n");
                printf("Solution for chapter 2nd Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-2-nutrition-in-animals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 3rd Chapter for Class 7:)\n\n");
                printf("Chapter 3rd Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=10A_t7p_xQRxdkgrYWT_jyhK_hC2eVHN-\n");
                printf("Solution for chapter 3rd Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-3-fiber-to-fabric/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 4th Chapter for Class 7:)\n\n");
                printf("Chapter 4th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1gzti3MsHdbLXE8YlIZGM6rQUboz46miu\n");
                printf("Solution for chapter 4th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-4-heat/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 5th Chapter for Class 7:)\n\n");
                printf("Chapter 5th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1niJ04-B8wxaeD6YhFRYKiaj7Na0Ed5ko\n");
                printf("Solution for chapter 5th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-5-acid-base-and-salt/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 6th Chapter for Class 7:)\n\n");
                printf("Chapter 6th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1rfRrgKmsGqPvXIA0hGzaXW-pfnUlUNoq\n");
                printf("Solution for chapter 6th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-6-physical-and-chemical-changes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 7th Chapter for Class 7:)\n\n");
                printf("Chapter 7th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1y5EsHcH8VllXdE3rzQN3KsZqMHAhBwcS\n");
                printf("Solution for chapter 7th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-7-weather-climate-and-adaptations-of-animals-to-climate/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 8th Chapter for Class 7:)\n\n");
                printf("Chapter 8th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1zNsRdGmuVlvKet1TJv5su8WrUwyDfXT3\n");
                printf("Solution for chapter 8th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-8-winds-storms-and-cyclones/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 9th Chapter for Class 7:)\n\n");
                printf("Chapter 9th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1DwpGKNmmlk3Ml2niNNwgG_zj9uJXWr2q\n");
                printf("Solution for chapter 9th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-9-soil/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 10th Chapter for Class 7:)\n\n");
                printf("Chapter 10th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1zmLrrUN09wAH3HkNF-u5VL0mp6lHPRaz\n");
                printf("Solution for chapter 10th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-10-respiration-in-animals-and-plants/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 11th Chapter for Class 7:)\n\n");
                printf("Chapter 11th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1lmQtkuo0AmwquTKngKzEZ132ZEEiC8XZ\n");
                printf("Solution for chapter 11th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-11-transportation-in-animals-and-plants/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 12th Chapter for Class 7:)\n\n");
                printf("Chapter 12th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=11ufCx2OfIZsbrPEjLhiRDIOv7qH2LXBe\n");
                printf("Solution for chapter 12th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-12-reproduction-in-plants/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 13th Chapter for Class 7:)\n\n");
                printf("Chapter 13th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1N1m5sVNINyA_radkIVlzioI7eovBGzkO\n");
                printf("Solution for chapter 13th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-13-motion-and-time/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 14th Chapter for Class 7:)\n\n");
                printf("Chapter 14th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1SFH2TH187v-tPeRV9kgLd9REymM5AN7E\n");
                printf("Solution for chapter 14th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-14-electric-current-and-its-effects/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 15th Chapter for Class 7:)\n\n");
                printf("Chapter 15th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1TB5RB7FPKgAZxmKgfk4OMvs5HARoqXy4\n");
                printf("Solution for chapter 15th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-15-light/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==16){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 16th Chapter for Class 7:)\n\n");
                printf("Chapter 16th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1mu_zC_4AT0M_1QdSGi49YAs7knrQUhl6\n");
                printf("Solution for chapter 16th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-16-water-a-precious-resource/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==17){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 17th Chapter for Class 7:)\n\n");
                printf("Chapter 17th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1O5Z7kaCdqk4sHkrXrZrw0TcHHuM-JJuq\n");
                printf("Solution for chapter 17th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-17-forests-our-lifeline/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==18){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 18th Chapter for Class 7:)\n\n");
                printf("Chapter 18th Science PDF for class 7\n");
                printf("https://drive.google.com/open?id=1kyzjfGnE5egTxPfWE8FTgBDMoEvXf_gu\n");
                printf("Solution for chapter 18th Science Class 7\n");
                printf("https://byjus.com/ncert-solutions-class-7-science/chapter-18-wastewater-story/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 18 Chapters in Class 7 Science:)\n");
            }
        }
        if(sub==3){
            printf("Press 1 To Get the Notes And Solutions of History for Class 7:)\n");
            printf("Press 2 To Get the Notes And Solutions of Civics for Class 7:)\n");
            printf("Press 3 To Get the Notes And Solutions of Geography for Class 7:)->");
            scanf("%d",&ssub);
            printf("\n");
            if(ssub==1){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 1st Chapter for Class 7:)\n\n");
                    printf("Chapter 1st History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=110KtGUiYZ3YANzHQ6YfRHqFes0g5AowS\n");
                    printf("Solution for chapter 1st History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-1-tracing-changes-through-a-thousand-years/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 2nd Chapter for Class 7:)\n\n");
                    printf("Chapter 2nd History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1tsiuI2YvkxJyuiCw0fr4-dcLc-hRwJ-u\n");
                    printf("Solution for chapter 2nd History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-2-new-kings-and-kingdoms/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 3rd Chapter for Class 7:)\n\n");
                    printf("Chapter 3rd History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1Y-8BcWY3k5hmJf-cnHjyOxYLCqgcU-jL\n");
                    printf("Solution for chapter 3rd History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-3-the-delhi-sultans/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 4th Chapter for Class 7:)\n\n");
                    printf("Chapter 4th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1jdYuCzWgjO_72qbdrMuw92abUn7R1fmp\n");
                    printf("Solution for chapter 4th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-4-the-mughal-empire/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 5th Chapter for Class 7:)\n\n");
                    printf("Chapter 5th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1TygACyXmSdRirqNMOQnf-PnL37R92gHZ\n");
                    printf("Solution for chapter 5th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-5-rulers-and-buildings/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 6th Chapter for Class 7:)\n\n");
                    printf("Chapter 6th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=15JtLiIkjlHfa_xssaLLnDvlKrfxImvjB\n");
                    printf("Solution for chapter 6th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-6-towns-traders-and-craftspersons/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 7th Chapter for Class 7:)\n\n");
                    printf("Chapter 7th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1PtgULWjq4f3RipvDlBg0TIqGT4ZdLfCL\n");
                    printf("Solution for chapter 7th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-7-tribes-nomads-and-settled-communities/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 8th Chapter for Class 7:)\n\n");
                    printf("Chapter 8th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1I1iE2H_CQBj96L6aIMcR3Lw2NdSXEeTK\n");
                    printf("Solution for chapter 8th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-8-devotional-paths-to-the-divine/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 9th Chapter for Class 7:)\n\n");
                    printf("Chapter 9th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1MbAkkMsugDw6nu8fzTR_FqMlB2lDCpxT\n");
                    printf("Solution for chapter 9th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-9-the-making-of-regional-cultures/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==10){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 10th Chapter for Class 7:)\n\n");
                    printf("Chapter 10th History PDF for class 7\n");
                    printf("https://drive.google.com/open?id=1etaZv76yHcgqhwpz_--nVxNtYr11HSG2\n");
                    printf("Solution for chapter 10th History Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-history-chapter-10-eighteenth-century-political-formations/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are only 10 Chapters in Class 7 Historyt:)\n");
                }
            }
            if(ssub==2){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 1st Chapter for Class 7:)\n\n");
                    printf("Chapter 1st Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1oeMcBTI3xgsmAhVMgDIB-HSMEviDPbGE/view?usp=sharing\n");
                    printf("Solution for chapter 1st Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-1-on-equality/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 2nd Chapter for Class 7:)\n\n");
                    printf("Chapter 2nd Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1fZtgY1Fwc60Nc-vSTWXYjK9OXDbt24MM/view?usp=sharing\n");
                    printf("Solution for chapter 2nd Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-2-role-of-the-government-in-health/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 3rd Chapter for Class 7:)\n\n");
                    printf("Chapter 3rd Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/11uU7OM4Q3xAj5USm3qYHa8zBcV2DDHSN/view?usp=sharing\n");
                    printf("Solution for chapter 3rd Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-3-how-the-state-government-works/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 4th Chapter for Class 7:)\n\n");
                    printf("Chapter 4th Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1JlkVC0D1YS1dFnrxhBl8OTQuLEdv9aWk/view?usp=sharing\n");
                    printf("Solution for chapter 4th Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-4-growing-up-as-boys-and-girls/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 5th Chapter for Class 7:)\n\n");
                    printf("Chapter 5th Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1EPQvVZCdl9qSWYgtWPpm6kJKq_OjEyMy/view?usp=sharing\n");
                    printf("Solution for chapter 5th Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-5-women-change-the-world/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 6th Chapter for Class 7:)\n\n");
                    printf("Chapter 6th Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1bMtEV8MZq4PvT1GwaUrlYeK4Ss1AzRli/view?usp=sharing\n");
                    printf("Solution for chapter 6th Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-6-understanding-media/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 7th Chapter for Class 7:)\n\n");
                    printf("Chapter 7th Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1Vva7QAYG0xCo-NrN8vOlh9ddGPG1R2j-/view?usp=sharing\n");
                    printf("Solution for chapter 7th Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-7-markets-around-us/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 8th Chapter for Class 7:)\n\n");
                    printf("Chapter 8th Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1AdlcjznN5CcHSjeiEAx-X0nhm9T07f43/view?usp=sharing\n");
                    printf("Solution for chapter 8th Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-8-a-shirt-in-the-market/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 9th Chapter for Class 7:)\n\n");
                    printf("Chapter 9th Civics PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1iWoto9GtdjxNp3PPpO2Y9_AabW3N1teo/view?usp=sharing\n");
                    printf("Solution for chapter 9th Civics Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-civics-chapter-9-struggle-for-equality/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are only 9 Chapters in Class 7 Civics:)\n");
                }
            }
            if(ssub==3){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 1st Chapter for Class 7:)\n\n");
                    printf("Chapter 1st Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1oPLXFEPW6qiwCHWXgJPIVtpmnAOU2qGX/view?usp=sharing\n");
                    printf("Solution for chapter 1st Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-1-environment/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 2nd Chapter for Class 7:)\n\n");
                    printf("Chapter 2nd Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/13o2jVOWsH7K6MRzlRKYPdHn_avBa1454/view?usp=sharing\n");
                    printf("Solution for chapter 2nd Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-2-inside-our-earth/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 3rd Chapter for Class 7:)\n\n");
                    printf("Chapter 3rd Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1gZpDzwpVaUqaiESZO_lDG2bN5xrtzhpE/view?usp=sharing\n");
                    printf("Solution for chapter 3rd Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-3-our-changing-earth/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 4th Chapter for Class 7:)\n\n");
                    printf("Chapter 4th Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1EFai8o5Q3SgITns95Q_JZkAVpG0MpFse/view?usp=sharing\n");
                    printf("Solution for chapter 4th Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-4-air/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 5th Chapter for Class 7:)\n\n");
                    printf("Chapter 5th Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1VTox6gWG9PrLkk5tE4corAJT3K_yDNUI/view?usp=sharing\n");
                    printf("Solution for chapter 5th Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-5-water/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 6th Chapter for Class 7:)\n\n");
                    printf("Chapter 6th Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1GlAkLwg9beYGl87FHNFfuCvW8NbeHMOb/view?usp=sharing\n");
                    printf("Solution for chapter 6th Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-6-natural-vegetation-and-wildlife/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 7th Chapter for Class 7:)\n\n");
                    printf("Chapter 7th Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1lrMPG0pfWp37L8KHv3AiwvmK3VEY9PcZ/view?usp=sharing\n");
                    printf("Solution for chapter 7th Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-7-human-environment-settlement-transport-and-communication/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 8th Chapter for Class 7:)\n\n");
                    printf("Chapter 8th Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1EibsH13msSqD2cjXqHC0ecC4utC4w0CM/view?usp=sharing\n");
                    printf("Solution for chapter 8th Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-8-human-interactions-the-tropical-and-the-sub-tropical-regions/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 9th Chapter for Class 7:)\n\n");
                    printf("Chapter 9th Geography PDF for class 7\n");
                    printf("https://drive.google.com/file/d/1VkODY_zEKfdU_aReMzoPD7pEf_pVnohH/view?usp=sharing\n");
                    printf("Solution for chapter 9th Geography Class 7\n");
                    printf("https://byjus.com/ncert-solutions-class-7-social-science-geography-chapter-9-life-in-the-deserts/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are only 9 Chapter in Class 7 Geography:)\n");
                }
            }
        }
    }
    if(class==8){
        printf("Press 1 To Get the Notes And Solutions of Maths for Class 8:)\n");
        printf("Press 2 To Get the Notes And Solutions of Science for Class 8:)\n");
        printf("Press 3 To Get the Notes And Solutions of Social Science for Class 8:)->");
        scanf("%d",&sub);
        printf("\n");
        if(sub==1){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 1st Chapter for Class 8:)\n\n");
                printf("Chapter 1st Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1jCJoe8Febj8KxS-npYRuj4Yc3AJjcvOd\n");
                printf("Solution for chapter 1st Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-1-rational-numbers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 2nd Chapter for Class 8:)\n\n");
                printf("Chapter 2nd Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1ajm6OLRAYP0ApgTSvH_w4L-FlFFlk9XV\n");
                printf("Solution for chapter 2nd Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-2-linear-equation/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 3rd Chapter for Class 8:)\n\n");
                printf("Chapter 3rd Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=15Wkf6s9sB3kOxtc1r8lieYgucSWudb1w\n");
                printf("Solution for chapter 3rd Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-3-understanding-quadrilaterals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 4th Chapter for Class 8:)\n\n");
                printf("Chapter 4th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1DUbX4ajn-1m7kkSMPFji5K_PPo7WYshZ\n");
                printf("Solution for chapter 4th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-4-applied-practical-geometry/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 5th Chapter for Class 8:)\n\n");
                printf("Chapter 5th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1VW5VN514lVRvGweNe7VLKf706sZLHL2e\n");
                printf("Solution for chapter 5th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-5-about-data-handling/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 6th Chapter for Class 8:)\n\n");
                printf("Chapter 6th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1En-eXKoH-wBYzHFVqaEuBFAamnKDyX8W\n");
                printf("Solution for chapter 6th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-6-square-square-roots/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 7th Chapter for Class 8:)\n\n");
                printf("Chapter 7th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=15onOuxr3aZRDTCpmOG55GXAqDVPzBPyK\n");
                printf("Solution for chapter 7th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-7-cube-and-cube-roots/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 8th Chapter for Class 8:)\n\n");
                printf("Chapter 8th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1anVm2fCwz7GqDfjMbC83LNVGBmOpNcB5\n");
                printf("Solution for chapter 8th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-8-comparing-quantities/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 9th Chapter for Class 8:)\n\n");
                printf("Chapter 9th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=16lmLlYQjcmHacp8A7OC2nS5-fwSxNy-f\n");
                printf("Solution for chapter 9th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-9-algebraic-expressions-and-identities/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 10th Chapter for Class 8:)\n\n");
                printf("Chapter 10th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1L0NC7Eo71gXZ8sdSRqKXVVD86Q96sNZY\n");
                printf("Solution for chapter 10th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-10-visualizing-solid-shapes/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 11th Chapter for Class 8:)\n\n");
                printf("Chapter 11th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=15i21cs6Ly95fbjKn5X1KJgWiSVUM6zZl\n");
                printf("Solution for chapter 11th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-11-mensuration/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 12th Chapter for Class 8:)\n\n");
                printf("Chapter 12th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1iAWacbr-mpPCmpBFMt6lfAknukRuDl9M\n");
                printf("Solution for chapter 12th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-12-exponents-and-powers/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 13th Chapter for Class 8:)\n\n");
                printf("Chapter 13th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1zAH4NEyj2a4-2VWDYV5IV4rWYh8kLDEe\n");
                printf("Solution for chapter 13th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-13-direct-inverse-proportions/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 14th Chapter for Class 8:)\n\n");
                printf("Chapter 14th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1KKop4sdvKC1OYsZSB05egmxXeaTqrx_f\n");
                printf("Solution for chapter 14th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-14-factorisation/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 15th Chapter for Class 8:)\n\n");
                printf("Chapter 15th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=1G6DJIQn18kyhtupVkCkeBLf6TlNkZkTw\n");
                printf("Solution for chapter 15th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-15-introduction-to-graphs/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==16){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 16th Chapter for Class 8:)\n\n");
                printf("Chapter 16th Maths PDF for class 8\n");
                printf("https://drive.google.com/open?id=15g78tO1CNKZNEvBYndV8xaR9T7OG11b3\n");
                printf("Solution for chapter 16th Maths Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-maths/chapter-16-playing-with-number/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 16 Chapters in Class 8 Maths:)\n");
            }
        }
        if(sub==2){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 1st Chapter for Class 8:)\n\n");
                printf("Chapter 1st Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1_6TsX9PvdF2EE9sp-rUVSwV-WHQtXfsF\n");
                printf("Solution for chapter 1st Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-1-crop-production-and-management/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 2nd Chapter for Class 8:)\n\n");
                printf("Chapter 2nd Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1GyGse3nhsnHrWgMHKGByF4Y2P0Ap6Odp\n");
                printf("Solution for chapter 2nd Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-2-microorganism-friend-foe/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 3rd Chapter for Class 8:)\n\n");
                printf("Chapter 3rd Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1BUZHLYp3DPoZvPtimH8RyyiuXUsdm0v9\n");
                printf("Solution for chapter 3rd Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-3-synthetic-fibres-and-plastics/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 4th Chapter for Class 8:)\n\n");
                printf("Chapter 4th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1J_5E7bmw-_yk5wELzCTnBrvxlPOFrefA\n");
                printf("Solution for chapter 4th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-4-materials-metals-and-non-metals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 5th Chapter for Class 8:)\n\n");
                printf("Chapter 5th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1z-m2ODECTKmHl2OpG6dRhZZYY0pp_tcj\n");
                printf("Solution for chapter 5th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-5-coal-and-petroleum/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 6th Chapter for Class 8:)\n\n");
                printf("Chapter 6th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=17Ugznmo-oAkIHIXSAbfiv3A7jPc9_uvc\n");
                printf("Solution for chapter 6th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-6-combustion-and-flames/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 7th Chapter for Class 8:)\n\n");
                printf("Chapter 7th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1oqjftYf_jnDQUd9_2CvnGbjmgyi7SEpb\n");
                printf("Solution for chapter 7th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-7-conservation-of-plants-and-animals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 8th Chapter for Class 8:)\n\n");
                printf("Chapter 8th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1VXbtV7itkg1WcqY839tFgjsFirUDG06-\n");
                printf("Solution for chapter 8th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-8-cell-structure-and-functions/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 9th Chapter for Class 8:)\n\n");
                printf("Chapter 9th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1YEkDnz3KDMG4B4dXqHq4wpC0qHlB_6qL\n");
                printf("Solution for chapter 9th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-9-reproduction-in-animals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 10th Chapter for Class 8:)\n\n");
                printf("Chapter 10th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1i0yhi-TnGUlLqwg2tullFGDYlCrlakRn\n");
                printf("Solution for chapter 10th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-10-reaching-the-age-of-adolescence/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 11th Chapter for Class 8:)\n\n");
                printf("Chapter 11th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1Pb7DgNJwNmhvT-JUU45kapExIe0OPCYI\n");
                printf("Solution for chapter 11th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-11-force-and-pressure/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 12th Chapter for Class 8:)\n\n");
                printf("Chapter 12th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1IpPPuql2a4OGk1apm7nlRNg70AyoDo5F\n");
                printf("Solution for chapter 12th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-12-friction/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 13th Chapter for Class 8:)\n\n");
                printf("Chapter 13th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1crO1K9RB1Ew8gxr4pQwQtnhPT1O6ggvi\n");
                printf("Solution for chapter 13th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-13-sound/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 14th Chapter for Class 8:)\n\n");
                printf("Chapter 14th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1Bbrg5Tfxr72uGuhPpKdSbYUTM9DGV8a6\n");
                printf("Solution for chapter 14th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-14-chemical-effects-of-electric-current/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 15th Chapter for Class 8:)\n\n");
                printf("Chapter 15th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1y0UPNd-o7gOD5oAOp2NfYJeHpJTzHowg\n");
                printf("Solution for chapter 15th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-15-some-natural-phenomena/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==16){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 16th Chapter for Class 8:)\n\n");
                printf("Chapter 16th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1mxWr1xhprSqbs5217nZGoS9ZY76g4i1i\n");
                printf("Solution for chapter 16th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-16-light/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==17){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 17th Chapter for Class 8:)\n\n");
                printf("Chapter 17th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=1uem_1EHbvjAxWtdj4SXzKJIbrqIo6n9y\n");
                printf("Solution for chapter 17th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-17-stars-and-the-solar-system/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==18){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 18th Chapter for Class 8:)\n\n");
                printf("Chapter 18th Science PDF for class 8\n");
                printf("https://drive.google.com/open?id=112Sno0pjPxY5PslYKdpTWJAKM_-AdeyH\n");
                printf("Solution for chapter 18th Science Class 8\n");
                printf("https://byjus.com/ncert-solutions-class-8-science/chapter-18-pollution-air-water/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 18 Chapter in Class 8 Science:)\n");
            }
        }
        if(sub==3){
            printf("Press 1 To Get the Notes And Solutions of History for Class 8:)\n");
            printf("Press 2 To Get the Notes And Solutions of Civics for Class 8:)\n");
            printf("Press 3 To Get the Notes And Solutions of Geography for Class 8:)->");
            scanf("%d",&ssub);
            printf("\n");
            if(ssub==1){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 1st Chapter for Class 8:)\n\n");
                    printf("Chapter 1st History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=13fpvZYQLA6Y7Xajc2Z3Kx9HX6grzGsfk\n");
                    printf("Solution for chapter 1st History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-1-how-when-and-where/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 2nd Chapter for Class 8:)\n\n");
                    printf("Chapter 2nd History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1906Kh7BzjvCR7ZzxkNN9HTapwQ7b4Frz\n");
                    printf("Solution for chapter 2nd History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-2-from-trade-to-territory-the-company-establishes-power/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 3rd Chapter for Class 8:)\n\n");
                    printf("Chapter 3rd History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1Q35GUm4Buhi53Ps_c6YRB-AjD6JHhOnJ\n");
                    printf("Solution for chapter 3rd History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-3-ruling-the-countryside/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 4th Chapter for Class 8:)\n\n");
                    printf("Chapter 4th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1Y4Z_wn7wbUi1vnH8Wmy1pVYWs8GtnnvY\n");
                    printf("Solution for chapter 4th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-4-tribals-dikus-and-the-vision-of-a-golden-age/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 5th Chapter for Class 8:)\n\n");
                    printf("Chapter 5th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1At0PaJ8HeVrm7ogMT-oEggn9snHxtih-\n");
                    printf("Solution for chapter 5th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-5-when-people-rebel-1857-and-after/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 6th Chapter for Class 8:)\n\n");
                    printf("Chapter 6th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=19bLX5IUieB4Oo_DiJRdYR7mfxj7aOKFJ\n");
                    printf("Solution for chapter 6th History Class 8\n");
                    printf("https://www.learncbse.in/ncert-solutions-for-class-8-history-social-science-olonialism-and-the-city/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 7th Chapter for Class 8:)\n\n");
                    printf("Chapter 7th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1mK9p1YIkglc4NK1TOGO2RapL_CNRMC1i\n");
                    printf("Solution for chapter 7th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-6-weavers-iron-smelters-and-factory-owners/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 8th Chapter for Class 8:)\n\n");
                    printf("Chapter 8th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1tFdr_13xDnGnfHHpSN-2IJFUZA1onWwl\n");
                    printf("Solution for chapter 8th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-7-civilising-the-native-educating-the-nation/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 9th Chapter for Class 8:)\n\n");
                    printf("Chapter 9th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1tsSBGdZfxxcjphaxOSM1dP8VxX4OcZWJ\n");
                    printf("Solution for chapter 9th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-8-women-caste-and-reform/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==10){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 10th Chapter for Class 8:)\n\n");
                    printf("Chapter 10th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1Rhg21E38u3ATQggdwFZnfzxJOdk47C4X\n");
                    printf("Solution for chapter 10th History Class 8\n");
                    printf("https://www.learncbse.in/ncert-solutions-for-class-8-history-the-changing-world-of-visual-arts/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==11){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 11th Chapter for Class 8:)\n\n");
                    printf("Chapter 11th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1slzskTzLrz6y0lKSZOcMFDg8jsK2DItQ\n");
                    printf("Solution for chapter 11th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-9-the-making-of-the-national-movement-1870s-1947/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==12){
                    printf("Here I Have Some Best NCERT Notes And Solution of History 12th Chapter for Class 8:)\n\n");
                    printf("Chapter 12th History PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1N47pnF5QcN3oQ89hUM7PpFpFEFxgjLzB\n");
                    printf("Solution for chapter 12th History Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-history-chapter-10-india-after-independence/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are only 12 Chapters in Class 8 History:)\n");
                }
            }
            if(ssub==2){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 1st Chapter for Class 8:)\n\n");
                    printf("Chapter 1st Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess301.pdf\n");
                    printf("Solution for chapter 1st Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-1-the-indian-constitution/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 2nd Chapter for Class 8:)\n\n");
                    printf("Chapter 2nd Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess302.pdf\n");
                    printf("Solution for chapter 2nd Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-2-understanding-secularism/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 3rd Chapter for Class 8:)\n\n");
                    printf("Chapter 3rd Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess303.pdf\n");
                    printf("Solution for chapter 3rd Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-3-why-do-we-need-a-parliament/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 4th Chapter for Class 8:)\n\n");
                    printf("Chapter 4th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess304.pdf\n");
                    printf("Solution for chapter 4th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-4-understanding-laws/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 5th Chapter for Class 8:)\n\n");
                    printf("Chapter 5th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess305.pdf\n");
                    printf("Solution for chapter 5th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-5-judiciary/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 6th Chapter for Class 8:)\n\n");
                    printf("Chapter 6th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess306.pdf\n");
                    printf("Solution for chapter 6th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-6-understanding-our-criminal-justice-system/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==7){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 7th Chapter for Class 8:)\n\n");
                    printf("Chapter 7th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess307.pdf\n");
                    printf("Solution for chapter 7th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-7-understanding-marginalisation/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==8){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 8th Chapter for Class 8:)\n\n");
                    printf("Chapter 8th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess308.pdf\n");
                    printf("Solution for chapter 8th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-8-confronting-marginalisation/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==9){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 9th Chapter for Class 8:)\n\n");
                    printf("Chapter 9th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess309.pdf\n");
                    printf("Solution for chapter 9th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-9-public-facilities/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==10){
                    printf("Here I Have Some Best NCERT Notes And Solution of Civics 10th Chapter for Class 8:)\n\n");
                    printf("Chapter 10th Civics PDF for class 8\n");
                    printf("https://ncertbooks.solutions/wp-content/uploads/2020/01/hess310.pdf\n");
                    printf("Solution for chapter 10th Civics Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-civics-chapter-10-law-and-social-justice/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are only 10 Chapters in Class 8 Civics:)\n");
                }
            }
            if(ssub==3){
                printf("Enter the Chapter Number You Want The Notes And Solution of:)");
                scanf("%d",&chap);
                if(chap==1){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 1st Chapter for Class 8:)\n\n");
                    printf("Chapter 1st Geography PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1RVg0DeaNY_dtQUXxIeeZtuo-sj7B4ZLf\n");
                    printf("Solution for chapter 1st Geography Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-geography-chapter-1-resources/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==2){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 2nd Chapter for Class 8:)\n\n");
                    printf("Chapter 2nd Geography PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1RsImwG17htaKYobKlpyVl3FS23l424aq\n");
                    printf("Solution for chapter 2nd Geography Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-geography-chapter-2-land-soil-water-natural-vegetation-and-wildlife-resources/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==3){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 3rd Chapter for Class 8:)\n\n");
                    printf("Chapter 3rd Geography PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1eo9STLBpjOR2ZsZxMJTvobyzUIwATk5z\n");
                    printf("Solution for chapter 3rd Geography Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-geography-chapter-3-mineral-and-power-resources/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==4){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 4th Chapter for Class 8:)\n\n");
                    printf("Chapter 4th Geography PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1nOMwlH-w76jWB4f7LQcg9cs_XRd_jzP_\n");
                    printf("Solution for chapter 4th Geography Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-geography-chapter-4-agriculture/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==5){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 5th Chapter for Class 8:)\n\n");
                    printf("Chapter 5th Geography PDF for class 8\n");
                    printf("https://drive.google.com/open?id=1oK57--_tV-n--1P3MrKtfDuz7fhlOYSB\n");
                    printf("Solution for chapter 5th Geography Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-geography-chapter-5-industries/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else if(chap==6){
                    printf("Here I Have Some Best NCERT Notes And Solution of Geography 6th Chapter for Class 8:)\n\n");
                    printf("Chapter 6th Geography PDF for class 8\n");
                    printf("https://drive.google.com/open?id=11SDN1kItn6qUQVHoTeEXGFBlKAbbW0Ap\n");
                    printf("Solution for chapter 6th Geography Class 8\n");
                    printf("https://byjus.com/ncert-solutions-class-8-social-science-geography-chapter-6-human-resources/\n\n");
                    printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
                }
                else{
                    printf("Please enter the correct Chapter number there are ony 6 Chapters in Class 8 Geography:)\n");
                }
            }
        }
    }
    if(class==9){
        printf("Press 1 To Get the Notes And Solutions of Maths for Class 9:)\n");
        printf("Press 2 To Get the Notes And Solutions of Science for Class 9:)\n");
        printf("Press 3 To Get the Notes And Solutions of Social Science for Class 9:)->");
        scanf("%d",&sub);
        printf("\n");
        if(sub==1){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 1st Chapter for Class 9:)\n\n");
                printf("Chapter 1st Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1MNYXyfZPPXZHUsZkfMcMcayYip5mIb8p/view?usp=sharing\n");
                printf("Solution for chapter 1st Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-1-number-systems/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 2nd Chapter for Class 9:)\n\n");
                printf("Chapter 2nd Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1m_7qH2sFz4RMYe5QG1t9AhvIAa-8Xopk/view?usp=sharing\n");
                printf("Solution for chapter 2nd Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-2-polynomial/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 3rd Chapter for Class 9:)\n\n");
                printf("Chapter 3rd Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1RnvURbj5wVhv3YMOl2RkeTi0z-9e3eOk/view?usp=sharing\n");
                printf("Solution for chapter 3rd Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-3-coordinate-geometry/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 4th Chapter for Class 9:)\n\n");
                printf("Chapter 4th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1WTule8JYeKrM2TjkrrImACCMC9xgNCUd/view?usp=sharing\n");
                printf("Solution for chapter 4th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-4-linear-equation-in-two-variables/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 5th Chapter for Class 9:)\n\n");
                printf("Chapter 5th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1KGih76AkLF6KTKEt7mdSPfJlwLU_wCik/view?usp=sharing\n");
                printf("Solution for chapter 5th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-5-introduction-to-euclids-geometry/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 6th Chapter for Class 9:)\n\n");
                printf("Chapter 6th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/132flWNeogSH4zexCOx9APrnWBNSKwcum/view?usp=sharing\n");
                printf("Solution for chapter 6th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-6-lines-and-angles/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 7th Chapter for Class 9:)\n\n");
                printf("Chapter 7th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1yyOsGeKkDUqVfnDbcePXFl_sFxCviyw8/view?usp=sharing\n");
                printf("Solution for chapter 7th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-7-geometry-of-triangles/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 8th Chapter for Class 9:)\n\n");
                printf("Chapter 8th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1TZkhSk4dG_XrLYU327rTO3ijsRW2htN4/view?usp=sharing\n");
                printf("Solution for chapter 8th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-8-quadrilaterals/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 9th Chapter for Class 9:)\n\n");
                printf("Chapter 9th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1kGhI1v_JfJMiAd9ERM7aPXTFIQk_7IIx/view?usp=sharing\n");
                printf("Solution for chapter 9th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-9-areas-of-parallelograms-and-triangle/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 10th Chapter for Class 9:)\n\n");
                printf("Chapter 10th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1Rw9j_62HniDZ7PRFfeIecLwz83IpmRaD/view?usp=sharing\n");
                printf("Solution for chapter 10th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-10-circles/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 11th Chapter for Class 9:)\n\n");
                printf("Chapter 11th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1hArSRPueJni9p1PPMKi_jmv_ILeVRU1Y/view?usp=sharing\n");
                printf("Solution for chapter 11th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-11-construction/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 12th Chapter for Class 9:)\n\n");
                printf("Chapter 12th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1oYxRU9uYmjAmRrHvOTDeaDeRdLnvLlke/view?usp=sharing\n");
                printf("Solution for chapter 12th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-12-herons-formula/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 13th Chapter for Class 9:)\n\n");
                printf("Chapter 13th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1sozkkxhgR5LAKgC1I4ZuZZZkkkv3xVHG/view?usp=sharing\n");
                printf("Solution for chapter 13th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-13-surface-area-and-volume/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 14th Chapter for Class 9:)\n\n");
                printf("Chapter 14th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1mmvcxFXqxGbSQWDykntq5gwfC0ZI11nf/view?usp=sharing\n");
                printf("Solution for chapter 14th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-14-statistics/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Maths 15th Chapter for Class 9:)\n\n");
                printf("Chapter 15th Maths PDF for class 9\n");
                printf("https://drive.google.com/file/d/1CzGnyQ42EP8f2L7WMMJaHZ5pZLzGOJFh/view?usp=sharing\n");
                printf("Solution for chapter 15th Maths Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-maths/chapter-15-introduction-to-probability/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 15 Chapter in Class 9 Maths:)\n ");
            }
        }
        if(sub==2){
            printf("Enter the Chapter Number You Want The Notes And Solution of:)");
            scanf("%d",&chap);
            if(chap==1){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 1st Chapter for Class 9:)\n\n");
                printf("Chapter 1st Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1hcgvi5tnb0x4Fo4u_TS7IVIw1rsrBGb9/view?usp=sharing\n");
                printf("Solution for chapter 1st Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-1-matter-in-our-surroundings/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==2){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 2nd Chapter for Class 9:)\n\n");
                printf("Chapter 2nd Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1yF3ZvehchqTqQx3TYd2wWCzKBeMUsPuG/view?usp=sharing\n");
                printf("Solution for chapter 2nd Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-2-is-matter-around-us-pure/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==3){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 3rd Chapter for Class 9:)\n\n");
                printf("Chapter 3rd Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1t5FyaNnhPeOiDpPs5nPe2xGwIDri0N_J/view?usp=sharing\n");
                printf("Solution for chapter 3rd Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-3-atoms-and-molecules/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==4){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 4th Chapter for Class 9:)\n\n");
                printf("Chapter 4th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1puA4w--Y1JwrcLQmG-6op-3UcrlrUqEH/view?usp=sharing\n");
                printf("Solution for chapter 4th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-4-structure-of-atom/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==5){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 5th Chapter for Class 9:)\n\n");
                printf("Chapter 5th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1Xajrml5FesmCtx7qyMcixOzkGQfD3tdi/view?usp=sharing\n");
                printf("Solution for chapter 5th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-5-fundamental-unit-of-life/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==6){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 6th Chapter for Class 9:)\n\n");
                printf("Chapter 6th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/19FZei63O4Q6HFKgPWSVnD3u1H500D2_I/view?usp=sharing\n");
                printf("Solution for chapter 6th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-6-tissues/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==7){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 7th Chapter for Class 9:)\n\n");
                printf("Chapter 7th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/17ZjCdMLEwYm4XLIq6ouxKpHqtF5mrG_Q/view?usp=sharing\n");
                printf("Solution for chapter 7th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-7-diversity-in-living-organisms/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==8){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 8th Chapter for Class 9:)\n\n");
                printf("Chapter 8th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/15IUn2FrabYlQeMFzlUQFBdNLV5EdGdZR/view?usp=sharing\n");
                printf("Solution for chapter 8th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-8-motion/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==9){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 9th Chapter for Class 9:)\n\n");
                printf("Chapter 9th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1dyn4rVsPE8PxBHQSmKo8OQ-APc94KNpO/view?usp=sharing\n");
                printf("Solution for chapter 9th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-9-force-and-laws-of-motion/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==10){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 10th Chapter for Class 9:)\n\n");
                printf("Chapter 10th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1sTSuy7xXo6HC9u2NRYYRLfnwNCod-GqS/view?usp=sharing\n");
                printf("Solution for chapter 10th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-10-gravitation/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==11){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 11th Chapter for Class 9:)\n\n");
                printf("Chapter 11th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1-dlw9076NFT3_IAiJCArbu5qwOgfvmAz/view?usp=sharing\n");
                printf("Solution for chapter 11th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-11-work-and-energy/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==12){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 12th Chapter for Class 9:)\n\n");
                printf("Chapter 12th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1TcdXm5-kd16uS-BXrqWWRX1tdiUjmMMk/view?usp=sharing\n");
                printf("Solution for chapter 12th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-12-sound/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==13){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 13th Chapter for Class 9:)\n\n");
                printf("Chapter 13th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1rkisqddpLFxVUqnEb8PN_d3aNckcBUgt/view?usp=sharing\n");
                printf("Solution for chapter 13th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-13-why-do-we-fall-ill/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==14){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 14th Chapter for Class 9:)\n\n");
                printf("Chapter 14th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1bdeefqpsiUIuihuRo3JQSalpGm_qMAAr/view?usp=sharing\n");
                printf("Solution for chapter 14th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-14-natural-resources/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else if(chap==15){
                printf("Here I Have Some Best NCERT Notes And Solution of Science 15th Chapter for Class 9:)\n\n");
                printf("Chapter 15th Science PDF for class 9\n");
                printf("https://drive.google.com/file/d/1EwO_KUl0CwDSQH_7UMYETJIx25jkYKIL/view?usp=sharing\n");
                printf("Solution for chapter 15th Science Class 9\n");
                printf("https://byjus.com/ncert-solutions-class-9-science/chapter-15-improvement-in-food-resources/\n\n");
                printf("                 Note: Select the Link and open in any browser to access the Notes And Solution:)\n");
            }
            else{
                printf("Please enter the correct Chapter number there are only 15 Chapters in Class 9 in Science:)\n");
            }
        }
