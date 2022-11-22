#include<stdio.h>

int main()
{
    float income,tax;
    printf("Enterr Your annual income \n");
    scanf("%f",&income);
    if((income>250000)&&(income<=500000))
    {
        tax=0.05*(income-250000);
    }
    if(income>500000 && income<=1000000)
    {
        tax=0.10*(income-500000);
    }
    if(income>1000000)
    {
        tax=0.30*(income-1000000);
    }
    if(income<=250000)
    {
        tax=0;
    }
    printf("The tac on your income is %f",tax);
    

    return 0;
}