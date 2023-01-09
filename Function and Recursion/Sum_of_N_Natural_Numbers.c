#include<stdio.h>
int sumofnnaturalnumbers();
void main()
{
    int num;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    sumofnnaturalnumbers(num);
    printf("The sum of the first %d is %d.",num,sumofnnaturalnumbers(num));
}
int sumofnnaturalnumbers(int num)
{
    int sum;
    if(num!=0)
    {
        sum=num+sumofnnaturalnumbers(num-1);
        return sum;
    }
    else
    {
        return num;
    }
}