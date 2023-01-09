#include<stdio.h>
void main()
{
    int a,b,product;
    printf("Enter Multiplication:  ");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
        product=a*b;
        printf("%d x %d is %d\n",a,b,product);
    }

}