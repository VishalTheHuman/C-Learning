// Write a program in C to reverse a string
#include<stdio.h>
void main()
{
    char string[100]; char str[100];
    printf("Enter a String:\n");
    gets(string);
    int sum=0;
    for(int i=0;i<100;i++)
    {
        if(string[i]!='\0')
        {
            sum++;
        }
        else{
            break;
        }
    }
    printf("The Reversed String is: ");
    for(int i=0;i<sum;i++)
    {
        printf("%c",string[sum-i-1]);
    }
}
