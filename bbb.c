#include<stdio.h>
int main ()
{
    int base, height;
    float area, common;
    common = 0.5;
    printf("enter the value of the base\n");
scanf("%d", &base);

printf("enter the value of the height\n");
scanf("%d", &height);
area = common*base*height;
printf("area of the triangle is %f",area);
return 0;
}
