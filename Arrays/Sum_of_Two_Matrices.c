#include<stdio.h>
void main()
{
    int i,j;
    printf("Matrix Dimensions:\n");
    printf("Number of Rows: \n");
    scanf("%d",&i);
    printf("Number of Columns: \n");
    scanf("%d",&j);
    printf("Matrix Elements (Matrix 1):\n");
    int mat1[i][j],mat2[i][j],mat3[i][j];
    for(int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        {
            mat1[i][j];
            printf("Enter Matrix 1 %d%d Element :\n",m+1,n+1);
            scanf("%d",&mat1[m][n]);
        }
    }
    printf("Matrix Elements (Matrix 2):\n");
    for(int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        {
            mat2[i][j];
            printf("Enter Matrix 1 %d%d Element :\n",m+1,n+1);
            scanf("%d",&mat2[m][n]);
        }
    }
    printf("The Sum is\n");
    for(int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        {
            mat3[m][n]=mat1[m][n]+mat2[m][n];
            if(n==0)
            {
                printf("\n");
            }
            printf("%d ",mat3[m][n]);
        }
    }
}