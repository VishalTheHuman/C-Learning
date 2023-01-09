#include <stdio.h>
#include <math.h>

int fact(double a);
float power(float x, float k);
void main()
{
    int terms;
    float x;  
    printf("Enter the number of terms :");
    scanf("%d",&terms);
    printf("Enter the Value of X :");
    scanf("%f",&x);
    float sum = x;
    if (terms==1) 
    {
        printf("The sum of the series %f",sum);
    }
    else
    {
        for(float i=1;i<terms;i++)
        {
            float a=1;
            float k=1/(i+1);
            sum = sum + ((2*i + 1)*power(x,k))/fact(i);
            i++;
        }
        printf("The sum of the series %f",sum);
    }
    
}

float power(float x, float k)
{
    return pow(x,k);
}

int fact(double a)
{
    if (a < 2) {
        return 1; 
    } else {
        int b=a*fact(a-1);
        return b;
    }
}

