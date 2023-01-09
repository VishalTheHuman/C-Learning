// Matrix Multiplication
#include<stdio.h>
void main()
{
    int m,n; int p,q;
    printf("Matrix A:\n");
    printf("Enter the Number of Rows:\n");
    scanf("%d",&m);
    printf("Enter the Number of Columns:\n");
    scanf("%d",&n);
    int A[m][n];
    printf("Matrix B:\n");
    printf("Enter the Number of Rows:\n");
    scanf("%d",&p);
    printf("Enter the Number of Columns:\n");
    scanf("%d",&q);
    int B[p][q];
    int C[m][q];
    int R,S=0;
    // Matrix A
    printf("Matrix A:\n");
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element %d%d of Matrix A: ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    //Matrix B
    printf("Matrix B:\n");
    for(int i =0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("Enter the element %d%d of Matrix B: ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    //Calculating
    for(int i=0;i<m;i++)
    {
        for(int j =0;j<q;j++)
        {
            C[i][j]=0;
            for(int k=0;k<n;k++)
            {
                C[i][j]+=(A[i][k])*(B[k][j]);
            }
            
        }
    }
    //Matrix C
    printf("\nMatrix C:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",C[i][j]);
            if(j==q-1)
            {
            printf("\n");
            }
        }
    }
}