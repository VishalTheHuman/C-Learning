#include<stdio.h>
int cubeof();
void main()
{
    int num;
    printf("Enter a Number :\n");
    scanf("%d", &num);
    printf("The cube of %d is %d",num,cubeof(num));

}
int cubeof(int num)
{
    int cube;
    cube=num*num*num;
    return cube;
}