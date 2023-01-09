#include<stdio.h>
int power();
void main()
{
    int X,Y;
    printf("Enter the base Number :\n");
    scanf("%d",&X);
    printf("Enter the power:\n");
    scanf("%d",&Y);
    printf("%d to the power %d is %d",X,Y,power(X,Y));
}

int power(int X,int Y)
{
    int G,Z=1;
    for (G=1;G<=Y;G++)
    {
        Z=Z*X;
    }
    return Z;
    
}