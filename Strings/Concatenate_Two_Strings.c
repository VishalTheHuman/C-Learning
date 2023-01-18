/*
Write a C Program to concatenate two strings obtained from the user.
*/
#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter the String 1:\n");
    gets(str1);
    printf("Enter the String 2:\n");
    gets(str2);
    // Length of String 1
    int s1=0;
    for(int i=0;i<100;i++)
    {
        if(str1[i]!='\0')
        {
            s1++;
        }
        else
        {
            break;
        }
    }
    // Length of String 2
    int s2=0;
    for(int i=0;i<100;i++)
    {
        if(str2[i]!='\0')
        {
            s2++;
        }
        else
        {
            break;
        }
    }
    char str[s1+s2];
    for(int i=0;i<s1+s2;i++)
    {
        if(i<s1)
        {str[i]=str1[i];}
        else
        {str[i]=str2[i-s1];}
    }
    printf("The Concatenated String is : %s",str);
}