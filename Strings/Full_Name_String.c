#include<stdio.h>
void main()
{
    char First[20];
    printf("Enter your Name:\n");
    gets(First);
    //fgets(First,10,stdin); Takes First 10 Chars
    puts(First);
}