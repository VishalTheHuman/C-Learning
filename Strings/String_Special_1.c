#include<stdio.h>
void main()
{
    char name[30];int sum=0;
    printf("Enter a String:\n");
    gets(name);
    for(int i =0;i<30;i++)
    {
        if (name[i]=='a'||name[i]=='A')
        {
            sum++;
        }
    }
    printf("The Number of times 'a' or 'A' has appeared is %d",sum);
}