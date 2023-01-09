#include<stdio.h>
void main()
{
    int a;
    do
    {
        printf("Enter a Number : ");
        scanf("%d",&a);
        printf("%d\n",a);
    }while(a%2==0);
}