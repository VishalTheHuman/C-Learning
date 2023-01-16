// C Program to find the length of the String 
#include<stdio.h>
void main()
{
    char string[100];int sum=0;
    printf("Enter a String :\n");
    gets(string);
    for(int i=0;i<100;i++)
    {
        if(string[i] != '\0')
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    printf("The length of the string is %d",sum);
}