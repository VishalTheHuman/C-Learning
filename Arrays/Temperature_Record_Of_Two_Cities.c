#include<stdio.h>

void main()
{
    int temp2[2][7];
    printf("Enter the temperature record:\n");
    printf("City One: \n");
    for(int i=0;i<7;i++)
    {
        printf("Day %d : \n",i+1);
        scanf("%d",&temp2[0][i]);
    }
    printf("Enter the temperature record:\n");
    printf("City Two: \n");
    for(int i=0;i<7;i++)
    {
        printf("Day %d : \n",i+1);
        scanf("%d",&temp2[1][i]);
    }
    printf("Row (1): City One\n");
    printf("Row (2): City Two\n");
    for(int k=0;k<2;k++)
    {
        for(int j=0;j<7;j++)
        {
            if(k==1 && j==0)
            {
                printf("\n");
            }
            printf("%d ",temp2[k][j]);
        }
    }
}