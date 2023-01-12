/*
Getting the Size of a Sqaure Matrix. Obtaining the diagonal elements from the user.
Then appending those elements into a 1-Dimensional Matix with a condition :
If element is less than or equal to 5 replace with a Zero
*/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Size of Square Matrix: ");
    scanf(" %d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i==j)
            {
                printf("Enter the %d%d Element in the Matrix: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
            else
            {
                a[i][j]=0;
            }  
        }
    }
    printf("The Resulatant Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %3d",a[i][j]);
            if(j==n-1)
            {
                printf("\n");
            }
        }
    }
    printf("\n The Diagonal Matrix:\n");
    int a1[n];
    for(int i=0;i<n;i++)
    {
        if(a[i][i]>5)
        {
            a[i][i]=a[i][i];
        }
        else
        {
            a[i][i]=0;
        }
        a1[i]=a[i][i];
        printf(" %d",a1[i]);
    }
}