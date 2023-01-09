#include<stdio.h>
void main()
{
    int Marks;
    printf("Maximum Marks \n");
    printf("Enter the marks out of 100 : \n");
    scanf("%d",&Marks);

    if(100>Marks>=40)
    {
        printf("Passed\n");
        if(Marks>=80)
        {
            printf("Grade:A");
        }
        else if(Marks>=60)
        {
            printf("Grade:B");
        }
        else if(Marks>=40)
        {
            printf("Grade:C");
        }
    }
    else if(Marks<40)
    {
        printf("Failed\nGrade:D");

    }
    else if(Marks>100)
    {
        printf("Error.You have Entered an invalid Value ");
    }
    
}