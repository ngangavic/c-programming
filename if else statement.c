// Program to check whether an integer entered by the user is odd or even
#include <stdio.h>
int main()
{
    int number;
     printf("enter a number :");
     scanf("%d",&number);

     if(number%2==0)
        printf("%d is an even number  ",number);
     else
        printf("%d is an odd number ",number);

}
