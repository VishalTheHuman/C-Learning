/*
Write a C Program to the size of Matrix A and B. Also get the elements of A and B from the user. Then compute AB(Matrix Multiplication). Create a matrix C in which elements are 1 if corresponding element is greater than 5 else 0. Display A,B,AB,C, and Number of 1's in the Matrix C
*/
#include<stdio.h>
void main()
{
    int m,n,p,q;
    printf("Matrix A:\nEnter the Number of Rows of A:\n");
    scanf("%d",&m);
    printf("Enter the Number of Columns of A:\n");
    scanf("%d",&n);
    printf("\nMatrix B:\nEnter the Number of Rows of B:\n");
    scanf("%d",&p);
    printf("Enter the Number of Columns of B:\n");
    scanf("%d",&q);
    int sum;
    int A[m][n],B[p][q],C[m][q],AB[m][q];
    if(n!=p)
    {
        printf("Invalid Inputs");
    }
    else
    {
        printf("Matrix A Elements:\n");
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                printf("Enter the %d%d Element of the Matrix A: \n",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
        }
        printf("Matrix B Elements:\n");
        for (int i=0;i<p;i++)
        {
            for (int j=0;j<q;j++)
            {
                printf("Enter the %d%d Element of the Matrix B: \n",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                sum=0;
                for(int k=0;k<n;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                AB[i][j]= sum;
            }
        }
        printf("\nMatrix A:\n");
        {
            for (int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                printf(" %4d",A[i][j]);
                if(j==n-1)
                {
                    printf("\n");
                }
            }
        }
        printf("\nMatrix B:\n");
        {
            for (int i=0;i<p;i++)
            {
                for(int j=0;j<q;j++)
                {
                printf(" %4d",B[i][j]);
                if(j==q-1)
                {
                    printf("\n");
                }
                }
            }
        }
        printf("\nMatrix AB:\n");
        {
            for (int i=0;i<m;i++)
            {
                for(int j=0;j<q;j++)
                {
                printf(" %4d",AB[i][j]);
                if(j==q-1)
                {
                    printf("\n");
                }
                }
            }
        }
        printf("Matrix C:\n");
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                if(AB[i][j]>5)
                {
                    C[i][j]=1;
                }
                else
                {
                    C[i][j]=0;
                }
                printf(" %d",C[i][j]);
                if(j==q-1)
                {
                    printf("\n");
                }
                if(C[i][j]==1)
                {
                    k++;
                }
            }
        }
        printf("\nThe No of 1's: %d",k);
    }
}
}