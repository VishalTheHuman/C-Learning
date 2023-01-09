#include<stdio.h>
void Check_Palindrome(int n);
void main()
{
    int Number;
    printf("Enter a Number:\n");
    scanf("%d",&Number);
    Check_Palindrome(Number);
}
void Check_Palindrome(int n)
{
    int c=n,sum=0;
    while(n>0)
    {
    int mod = n%10;
    sum=(sum*10)+mod;
    n=n/10;
    }
    if (sum==c)
    {
        printf("The Number %d is a Palindrome",c);
    }
    else 
    {
        printf("The Number %d is not a Palindrome",c);
    }
}