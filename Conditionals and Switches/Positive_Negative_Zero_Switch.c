#include<stdio.h>
#include<math.h>
void main()
{
    float Number;
    int a;
    printf("Enter the Number : \n");
    scanf("%f",&Number);
    if (Number==0)
    {
        a=0;
    }
    else if (Number>0)
    {
        a=1;
    }
    else if (Number<0)
    {
        a=2;
    }
    switch (a)
    {
    case 0 :
    {
        printf("The Number %d is Zero",Number);
        break;
    }
    case 1 :
    {
        printf("The Number %.2f is Positive",Number);
        break;
    }
    case 2 :
    {
        printf("The Number %.2f is Negative",Number);
        break;
    }
    default:
    {
        printf("You have entered a Wrong input");
    }
        break;
    },
}









