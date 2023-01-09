#include<stdio.h>
int nthfibanacci();
void main()
{
    int num;
    printf("Enter a Number :\n");
    scanf("%d",&num);
    printf("The %dth term of Fibonacci Sequence is %d.",num,nthfibanacci(num));
}

int nthfibanacci(int num)
{
    if(num==1|| num==2)
    {
        return 1;
    }
    else if (num==0)
    {
        return 0;
    }
    else if (num>2)
    {
        return nthfibanacci(num-1)+nthfibanacci(num-2);
    }

}