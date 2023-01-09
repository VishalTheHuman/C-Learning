#include<stdio.h>

void main()
{
    int nums[5];
    float Average;
    for(int i=0;i<5;i++)
    {
    printf ("Enter a Number :\n");
    scanf(" %d",&nums[i]);
    }
    Average=(nums[0]+nums[1]+nums[2]+nums[3]+nums[4])/5;
    printf("The average is %.2f\n",Average);
}