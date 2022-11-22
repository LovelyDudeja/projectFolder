#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%100+1;//Genrates a random number between 1-100
    //printf("The number is %d\n",number);
    printf("%d",number);
    printf("\t\t\t*****WELCOME*****\n");
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(nguess==11)
        {
            printf("Sorry,You Loose!!!\nGame Over\nYou have crossed the 10 attempts");
            break;
        }
        if(guess>number)
            printf("Lower Numberr Please!\n\n");

        else if(guess<number) 
            printf("Higher Number Please!\n\n ");

        else
            printf("CORRECT NUMBER!\n\nYou guesses it in %d attempt\n\n",nguess);

        nguess++;
        
    }while((guess!=number));
    if(nguess==1||nguess==2)
    {
        printf("You got 5 Stars\n*****");
    }
    else if(nguess==3 || nguess==4)
    {
        printf("You got 4 stars\n****");
    }
    else if(nguess==5 || nguess==6)
    {
        printf("You got 3 stars\n***");
    }
    else if(nguess==7 || nguess==8)
    {
        printf("You got 2 stars\n**");
    }
    else if(nguess==9 || nguess==10)
    {
        printf("You got only 1 star\n*");
    }
    
    return 0;
}