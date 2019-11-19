//function for adding two numbers
#include<stdio.h>
int addNumbers(int a,int b);//function prototype
//A function prototype gives information to the compiler that the function may later be used in the program.

int main()
{
int sum,n1,n2;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
sum=addNumbers(n1,n2);//function call
printf("sum = %d",sum);
return 0;
}
int addNumbers(int a, int b)//function defination
{
    int result;
    result = a + b;
    return result;//return statement
}
