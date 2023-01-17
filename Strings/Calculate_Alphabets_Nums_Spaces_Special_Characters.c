// C Program to calculate Number of Alphabets,Numbers,Spaces,and Special Characters
#include<stdio.h>
void main()
{
    char string[100];
    printf("Enter a String: ");
    gets(string);
    int sum=0,alpha=0,num=0,spaces=0,specialchars=0;
    
    /*
    You can substitute the following by using:
    #include<string.h>
    String Library
    */
    
    /*
    Use int a = strlen(string)
    Then, substitute a instead of sum in this code
    */
    for(int i=0;i<100;i++)
    {
        if(string[i]!='\0')
        {sum++;}
        else{break;}
    }
    for(int i=0;i<sum;i++)
    {
        if(string[i]>='a'&& string[i]<='z' || string[i]>='A'&& string[i]<='Z')
        {alpha++;}
        else if (string[i]>='0' && string[i]<='9')
        {num++;}
        else if (string[i]==' ')
        {spaces++;}
        else {specialchars++;}
    }
    printf("The Number of Alphabets: %d\n",alpha);
    printf("The Number of Numbers: %d\n",num);
    printf("The Number of Spaces: %d\n",spaces);
    printf("The Number of Special Characters: %d\n",specialchars);
}