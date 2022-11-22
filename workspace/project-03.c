                                //  CONVERSION PROJECT


/*  kilometers == miles
inches == foot
centimeters == inches
pound == kilograms
inches == meters
*/

#include<stdio.h>
int main()
{
    int num,p;
    printf("\t\t\t\tWELCOME TO OUR CONVERSION SOFTWARE\n");
    printf("\n\nAvailable Conversions :");
    printf("\n\tkilometers == meters");
    printf("\n\tinches == foot");
    printf("\n\tcentimeters == inches");
    printf("\n\tpound == kilograms");
    printf("\n\tinches == meters");

    printf("\n\n enter your conversion status by this numbering  ");
    printf("\n\t For kilometers == meters, press 1");
    printf("\n\t For inches == foot, press 2");
    printf("\n\t For centimeters == inches, press 3");
    printf("\n\t For pound == kilograms, press 4");
    printf("\n\t For inches == meters, press 5");
    printf("\n\n FOR EXIT PRESS 0");

    printf("\n\n enter your desirable number\n");
    scanf("%d",&num);

    printf("enter the number for converssion");
    scanf("%d",&p);

    switch(num)
    {  
         case 1:
        printf("\n %d km = %d meters",p,p*1000);
        break;
    
    
        case 2:
        printf("\n %d inches = %f foot ",p,p*0.083);
        break;
    
        case 3:
        printf("\n %d centimeter = %f inches ",p,p*0.394);
        break;
    

        case 4:
        printf("\n %d pounds = %f kilograms ",p,p*0.454);
        break;
    
        case 5:
        printf("\n %d inches = %f meters ",p,p*0.0254);
        break;
    
        case 0:
        goto end;
    }
    end:
    {
        printf("\nthanku!\n Keep Exploring");
    }
    return 0;
}