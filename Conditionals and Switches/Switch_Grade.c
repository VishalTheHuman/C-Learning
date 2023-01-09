#include<stdio.h>
void main()
{
int Marks,a;
printf("Maximum Marks \n");
printf("Enter the marks out of 100 : \n");
scanf("%d",&Marks);

if(Marks>=80 && Marks<=100)
{
    a=1;
}
else if(Marks<80 && Marks>=60)
{
    a=2;
}
else if(Marks>0 && Marks>=40)
{
    a=3;
}

switch(a)
{
    case 1: printf("Passed\nGrade:A");
    break;
    case 2: printf("Passed\nGrade:B");
    break;
    case 3: printf("Passed\nGrade:C");
    break;
    default: printf("Failed\nGrade:D");
}
}
