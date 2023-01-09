#include<stdio.h>
void main()
{
    float Temp;
    int a;
    printf("Enter the Temperature: ");
    scanf("%f",&Temp);
    printf("The Temperature is %.2f degree celcius\n",Temp);
    if (Temp<0)
    {
        a=0;
    }
    else if (Temp>=0 && Temp<10)
    {
        a=1;
    }
    else if (Temp>=10 && Temp<20)
    {
        a=2;
    }
    else if (Temp>=20 && Temp<30)
    {
        a=3;
    }
    else if(Temp>=30 && Temp<40)
    {
        a=4;
    }
        else if(Temp>=40)
    {
        a=5;
    }
    switch(a) 
    {
    case 0 :
    {
        printf("It's a Freezing weather");
        break;
    }
    case 1 :
    {
        printf("It's a Very weather");
        break;
    }
    case 2 :
    {
        printf("It's a Cold weather");
        break;
    }
    case 3 :
    {
        printf("It's a Normal weather");
        break;
    }
    case 4 :
    {
        printf("It's Hot");
        break;
    }
    case 5 :
    {
        printf("It's Very Hot");
        break;
    }
    }
}











