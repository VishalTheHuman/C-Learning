#include<stdio.h>
void main()
{
    int Marks;
    printf("Maximum Marks \n");
    printf("Enter the marks out of 100 : \n");
    scanf("%d",&Marks);

    if(Marks>100)
    {
        printf("Error. You have Entered value above 100 ");
    }
    else if (100>=Marks>=40)
    {
        printf("Passed");
    } else if (Marks<40)
    {
        printf("Failed");
    }


}
