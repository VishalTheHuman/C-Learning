#include<stdio.h>
void main()
{
    int a;
    a=1;
    for(a=1;a<=10;a++)
    {
        if(a==6)
        {
            continue;
        }
        else
        {
            printf(" %d",a);
        }
    }
}