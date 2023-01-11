#include<stdio.h>

void main()
{
    char name[20]; int sum=0;
    printf("Enter Your Name:\n");
    gets(name);
    
    for(int i=0;i<20;i++)
    {
        if(name[i]!=' ')
        {
            if(name[i]=='\0')
            {
                break;
            }
            else
            {
            sum=sum+1;
            }
        }
    }
    printf("The Length of the String Without Spaces %d",sum);
}