#include<stdio.h>
void main()
{
    float X_coordinate,Y_coordinate;
    printf("Enter the X-Coordinate: ");
    scanf("%f",&X_coordinate);
    printf("Enter the Y-Coordinate: ");
    scanf("%f",&Y_coordinate);
    if (X_coordinate==0 && Y_coordinate==0)
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Origin",X_coordinate,Y_coordinate);
    }
    else if(X_coordinate==0 && Y_coordinate!=0 || X_coordinate!=0 && Y_coordinate==0)
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Axis",X_coordinate,Y_coordinate);
    }
    else if (X_coordinate>0 && Y_coordinate>0)
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the First Quadrant",X_coordinate,Y_coordinate);
    }
    else if (X_coordinate<0 && Y_coordinate>0)
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Second Quadrant",X_coordinate,Y_coordinate);
    }
    else if (X_coordinate<0 && Y_coordinate<0)
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Third Quadrant",X_coordinate,Y_coordinate);
    }
    else if(X_coordinate>0 && Y_coordinate<0)
    {
        printf("The Coordinate Point (%.2f,%.2f) lies on the Fourth Quadrant",X_coordinate,Y_coordinate);
    }


}







