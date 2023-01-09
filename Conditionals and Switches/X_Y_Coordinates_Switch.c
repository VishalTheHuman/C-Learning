#include<stdio.h>
void main()
{
    float X_coordinate,Y_coordinate;
    int a;
    printf("Enter the X-Coordinate: ");
    scanf("%f",&X_coordinate);
    printf("Enter the Y-Coordinate: ");
    scanf("%f",&Y_coordinate);
    if (X_coordinate==0 && Y_coordinate==0)
    {
        a=0;
    }
    else if(X_coordinate==0 && Y_coordinate!=0 || X_coordinate!=0 && Y_coordinate==0)
    {
        a=5;
    }
    else if (X_coordinate>0 && Y_coordinate>0)
    {      
        a=1;
    }
    else if (X_coordinate<0 && Y_coordinate>0)
    {
        a=2;
    }
    else if (X_coordinate<0 && Y_coordinate<0)
    {
        a=3;
    }
    else if(X_coordinate>0 && Y_coordinate<0)
    {
        a=4;
    }

    switch (a)
    {
    case 0 :
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Origin",X_coordinate,Y_coordinate);
        break;
    }
    case 1 :
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the First Quadrant",X_coordinate,Y_coordinate);
        break;
    }
    case 2 :
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Second Quadrant",X_coordinate,Y_coordinate);
        break;
    }
    case 3:
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Third Quadrant",X_coordinate,Y_coordinate);
        break;
    }
    case 4:
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Fourth Quadrant",X_coordinate,Y_coordinate);
        break;
    }
    case 5 :
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Axis",X_coordinate,Y_coordinate);
        break;
    }
    
    default:
    {
        printf("You entered invalid Values");
        break;
    }
    }
}



