#include<stdio.h>
void main()
{
    int asarr[5];
    int i=1;
    while(i<=5)
    {
        printf("Enter %d st/rd/th Number in the array : ",i);
        scanf("%d",&asarr[i-1]);
        i++;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(asarr[i]>asarr[j])
            {
                int temp=asarr[i];
                asarr[i]=asarr[j];
                asarr[j]=temp;
            }
        }
    }
    printf("The sorted array in Descending Order : \n");
    for(i=1;i<=5;i++)
    {
    printf("%d ",asarr[i-1]);
    }
}
