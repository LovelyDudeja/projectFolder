#include<stdio.h>
int main()
{
 4    //char str[]="Lovely";
    char str[]={'H','a','r','r','y'};
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;

}
/*
#include<stdio.h>

int main(){
    char str[]="Harry bhai";
    printf("%s",str);
    char s[34];
    printf("\nEnter you name:");
    gets(s);
    printf("your name is %s",s);
    puts(s);
    printf("\nEnter you name:");
    return 0;
}*/