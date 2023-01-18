/*
Write a C Program to get a string from the user and append the string "123" 
(a) at the end 
(b) at the start
(c) after the first character of the original string
*/
#include<stdio.h>
#include<string.h>
void main()
{
    // Default "123" String
    char def[3]={"123"}; 
    char str[100];
    printf("Enter a String:\n"); // Getting String From the User
    gets(str);
    int n=0;
    for(int i=0;i<30;i++)
    {
        if(str[i]!='\0')
        {
            n++;
        }
        else
        {
            break;
        }
    }

    // Concatenating at the End
    int n1=n+strlen(def);
    char strend[n1];
    for(int i=0;i<n1;i++)
    {
        if(i<n)
        {strend[i]=str[i];}
        else
        {strend[i]=def[i-n];}
    }
    printf("Concatenating at the End: %s",strend);
    
    // Concatenating at the Start
    char strstart[n1];
    for(int i=0;i<n1;i++)
    {
        if(i>2)
        {strstart[i]=str[i-3];}
        else
        {strstart[i]=def[i];}
    }
    printf("\nConcatenating at the Start: %s",strstart);

    // Concatenating after the first Character
    char strmid[n1];
    for(int i=0;i<n1;i++)
    {
        if(i==0)
        {strmid[i]=str[i];}
        else if(i>=1 && i<4)
        {strmid[i]=def[i-1];}
        else
        {strmid[i]=str[i-3];}
    }
    printf("\nConcatenating after the first character: %s",strmid);
}