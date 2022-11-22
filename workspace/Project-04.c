#include<stdio.h>

int main(){
    int num1,num2;
    char c;
    printf("\t\t\t\tDigital Calc Welcomes You\n");
    printf("Enter the operator\n");
    scanf("%ch",&c);
    printf("Enter the first operand\n");
    scanf("%d",&num1);
    printf("Enter the second operand\n");
    scanf("%d",&num2);
      switch(c)
    {
        case '+':
        {
            printf("%d + %d = %d\n",num1,num2,num1+num2);
            break;
        }
        case '-':
        {
            printf("%d - %d = %d\n",num1,num2,num1-num2);
            break;
        }
        case '*':
        {
            printf("%d * %d = %d\n",num1,num2,num1*num2);
            break;
        }
        case '/':
        {
            printf("%d / %d = %d\n",num1,num2,num1/num2);
            break;
        }
        case '%':
        {
            printf("%d % %d = %d\n",num1,num2,num1%num2);
            break;
        }
        default :
        {
            printf("You Entered the wrong operator!!!\n");
        }
    
}
    printf("Thanku");
   return 0;
}