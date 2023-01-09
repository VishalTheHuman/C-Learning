#include<stdio.h>

void main()
{
    int base,exponent,answer=1;
    printf("Enter the Base Number :\n");
    scanf("%d",&base);
    printf("Enter the Exponent Number :\n");
    scanf("%d",&exponent);
    for(int z=1;z<=exponent;z++)
    {
        answer=answer*base;
    }
    printf("The answer of %d to the power %d is %d",base,exponent,answer);
}
