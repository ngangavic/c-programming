#include <stdio.h>
#define SUM(a,b) (a+b)

int main()
{
int a,b,c;

printf("Enter the two numbers");
scanf("%d %d",&a,&b);
c=SUM(a,b);
printf("sum = %d",c);
}
