#include<stdio.h>
void main()
{
    char s1[30],s2[30]; int sum1=0,sum2=0;
    printf("Enter String 1:\n");
    gets(s1);
    printf("Enter String 2:\n");
    gets(s2);
    for(int i=0;i<30;i++)
    {
        if(s1[i]!='\0')
        {
            sum1++;
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<30;i++)
    {
        if(s2[i]!='\0')
        {
            sum2++;
        }
        else
        {
            break;
        }
    }
    printf("The String 1 is %d\n",sum1);
    printf("The String 2 is %d\n",sum2);
    if(sum1==sum2)
    {
        printf("They are of same length.");
    }
    else
    {
        printf("They are of different length.");
    }
}