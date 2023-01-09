#include<stdio.h>
void main()
{
    char Character;
    printf("Enter a character    : \n");
    scanf(" %c",&Character);
    int O = Character;
    if(O>='A' && O<='Z')
    {
        printf("The Character is in Upper Case ");
    }
    else if(O>='a' && O<='z')
    {
        printf("The Character is in Lower Case ");
    }
}