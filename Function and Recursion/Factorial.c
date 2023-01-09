#include<stdio.h>
int factorial();
void main()
{
    int num;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    printf("The Factorial of %d is %d.",num,factorial(num));
}
int factorial(int num)
{
    int fact;
    if(num>1)
    {
        fact=num*factorial(num-1);
        return fact;
    }
    else if (num==0)
    {
        return 1;
    }
    else
    {

        return num;
    }
}