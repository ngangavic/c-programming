// Program to relate two integers using =, > or <
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);

    printf("Enter number 2:");
    scanf("%d",&num2);

    if(num1==num2)
    {
        printf("Result: %d=%d",num1,num2);
    }
    else if(num1>num2)
    {
        printf("Result; %d>%d",num1,num2);
    }
    else
    {
        printf("Result: %d<%d",num1,num2);
    }

}
