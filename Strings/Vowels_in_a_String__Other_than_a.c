/* C Program to Find the Number of Vowels in a User Entered String and Number of characters other than 'a' or 'A'
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter a String: \n");
    gets(str);
    int vowels=0,rest=strlen(str),rest1=0;
    /*
    Use this if you're not supposed to use the String Library to find the 
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
    */
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowels++;
        }
        if(str[i]=='A'||str[i]=='a')
        {
            rest--;
        }
        /*
        Method 2:
        
        if(str[i]!='A'&& str[i]!='a')
        {rest1++;}
        */
    }
    printf("Number of Vowels: %d \n",vowels);
    printf("Number of Characters other than 'a' : %d \n",rest);
}