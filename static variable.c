
#include<stdio.h>
void Display();
int main()
{
    Display();
    Display();
}
void Display()
{
    static int c = 0;
    printf("%d ",c);
    c +=5;
}
