#include<stdio.h>
float daverage(int n,int arr[n]);

void main()
{
    int n;
    printf("Enter the values: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a number : \n");
        scanf("%d",&arr[i]);
    }
    float avvg= daverage(n,arr);
    printf("The average is %.2f",avvg);
}

float daverage(int n,int arr[n])
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float avg=sum/n;
    return avg;
}