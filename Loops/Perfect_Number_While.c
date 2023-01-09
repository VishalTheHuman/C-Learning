/*Write a C program to find all the perfect numbers within a given range of numbers
entered by the user.
*/
#include<stdio.h>
void main()
{
    int a,Low_Limit,Upper_Limit,ll;
    printf("Enter the Lower Limit: \n");
    scanf("%d",&Low_Limit);
    printf("Enter the Upper Limit : \n");
    scanf("%d",&Upper_Limit);
    printf("The Perfect numbers in the given Range [%d-%d] is/are",Low_Limit,Upper_Limit);
    
    while(ll<=Upper_Limit)
    {
        int z=1,sum=0;
        while(z<ll)
        {
            if(ll%z==0)
            {
                sum=sum+z;
            }
            z++;
        }
        if(sum==ll && sum!=0)
        {
            printf("  %d",ll);
        }
        ll++;
    }
}
