#include<stdio.h>
void main()
{
    int a,b;
    b=1;
    printf("Enter a number :");
    scanf("%d",&a);
    while (a>0){
        b=b*a;
        a-=1;
    }
    printf("The fact is %d",b);
}