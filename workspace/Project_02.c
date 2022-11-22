/* Project 2:-Snake Water Gun // Rock Paper Scissors*/
 /*if you choose snake and computer have water then snake will drink it and you will win the game
 if you choose snake and computer have gun then gun will shoot the snake and you will loose the game 
 if you choose gun and computer have  water then the gun will be in water and you will loose the game
 if you choose gun and computer have snake then gun will shot the snake and you will win the game 
 if you choose water and computer have snake then snake will drink it and you will loose
 if you chhose water and computer have gun then gun will be in water and you will win the game*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char computer)
{
    if (you == computer)
    {
        return 0;
    }
    else if (you == 's' && computer == 'w')
    {
        return 1;
    }
    else if (you == 's' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'w' && computer == 's')
    {
        return -1;
    }
    else if (you == 'w' && computer == 'g')
    {
        return 1;
    }
    else if (you == 'g' && computer == 's')
    {
        return 1;
    }
    else if (you == 'g' && computer == 'w')
    {
        return -1;
    }
}
int main()
{
    int number;
    char you, computer;
    srand(time(0));
    number=rand()%100+1;
    if(number<33)
    {
        computer='s';
    }
    else if(number>33 && number<66)
    {
        computer='w';
    }
    else if(number>66)
    {
        computer='g';
    }
    
    printf("Enter s for snake, w for water, g for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, computer);
    printf("You choose %c and computer chooses %c\n",you,computer);
    if (result == 0)
    {
        printf("Draw Match");
    }
    else if (result == -1)
    {
        printf("You loose the match!");
    }
    else if (result == 1)
    {
        printf("You won!");
    }
    return 0;
}