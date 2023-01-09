/*Write a C program to find all the perfect numbers within a given range of numbers
entered by the user.
*/
#include<stdio.h>

void main()
{
    int a,Low_Limit,Upper_Limit;
    printf("Enter the Lower Limit: \n");
    scanf("%d",&Low_Limit);
    printf("Enter the Upper Limit : \n");
    scanf("%d",&Upper_Limit);
    printf("The Perfect numbers in the given Range [%d-%d] is/are",Low_Limit,Upper_Limit);
    
    for(int ll=Low_Limit;ll<=Upper_Limit;ll++)
    {
        int z=1,sum=0;
        for(z=1;z<ll;z++)
        {
            if(ll%z==0)
            {
                sum=sum+z;
            }
        }
        if(sum==ll)
        {
            printf("  %d",ll);
        }
    }
}