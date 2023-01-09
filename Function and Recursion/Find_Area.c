#include<stdio.h>
float circlearea(float radius);
float rectanglearea(float length,float breadth);
float squarearea(float side);
void main()
{
    int a;
    printf("Which shape are you going to calculate the area?\nEnter 1 for Circle\nEnter 2 for Rectangle\nEnter 3 for Square \nEnter: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1 :
        {
            float radius;
            printf("Enter the Radius : ");
            scanf("%f",&radius);
            printf("The area of the circle with radius %.2f units is %.2f sqaure units.",radius,circlearea(radius));
            break;
        }
        case 2 :
        {
            float length,breadth;
            printf("Enter the Length :");
            scanf("%f",&length);
            printf("Enter the Breadth :");
            scanf("%f",&breadth);
            printf("The area of the rectangle with length %.2f units and breadth %.2f units is %.2f square units.",length,breadth,rectanglearea(length,breadth));
            break;
        }
        case 3 :
        {
            float side;
            printf("Enter the Length of the side : ");
            scanf("%f",&side);
            printf("The area of the square with side length %.2f units is %.2f sqaure units.",side,squarearea(side));
            break;
        }

    }
}

float circlearea(float radius)
{
    float area;
    area=3.14*(radius*radius);
    return area;
}

float rectanglearea(float length,float breadth)
{
    float area;
    area=length*breadth;
    return area;
}

float squarearea(float side)
{
    float area;
    area=side*side;
    return area;
}