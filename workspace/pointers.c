#include<stdio.h>
int main()
{
    int i=38;
    int *j=&i;//j will now store the address of i
    printf("The value of i is %d\n",i);//value of i
    printf("The value of address of i is %d\n",&i);//adress of i
    printf("The value of j is %d\n",j);//adress of i
    printf("The value of *j is %d\n",*j);//value stored in the adress poinnted by the pointer
    printf("the value of addreas of pointer j is %d\n",&j);//adress of j
    printf("The value at address of j %d",*(&j));//value at adress of j
    return 0;
}

/*Pointer to Pointers
#include<stdio.h>
int main()
{
    int i=2;
    int *j=&i;     --> j will take the adress of i and *j will take the value of i 
    int **k=&j;    --> *k will take the value of j(as adress of i) and **k will take the value of i 
    printf("The value of variable i is %d",**k);
}

Output will be the "the valuue of variable is 2"
*/