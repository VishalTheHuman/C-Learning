#include<stdio.h>
void main()
{
    int a,b,c;
    a=5;
    b=0;
    while(a<=50)
    {
        b=b+a;
        a=a+1;
    }
    printf("The sum of the numbers between 5 and 50 is %d",b);
}