#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,discriminant,root1,root2,roots,realpart,imgpart;
    printf("Enter the coefficients \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("The equation is %dx2+%dx+%d\n",a,b,c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        printf("ROots are real and different\n");
        root1=(-b+sqrt(discriminant))/2*a;
        root2=(-b-sqrt(discriminant))/2*a;
        printf("ROOt1 are %d and root 2 are %d",root1,root2);
    }
    else if(discriminant==0)
    {
        printf("Roots are real and equal\n");
        roots=-b/(2*a);
        printf("Roots are %d",roots);
    }
    else if(discriminant<0)
    {
        printf("Roots are imaginary\n");
        realpart=-b/2*a;
        imgpart=sqrt(-discriminant)/2*a;
        printf("Root1 are %d+i%d and root 2 are %d-i%d",realpart,imgpart,realpart,imgpart);
        return 0;
    }
}