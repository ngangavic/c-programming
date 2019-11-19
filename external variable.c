
#include<stdio.h>
void Display();

int n = 4;
int main()
{
    ++n;
    Display();
    return 0;
}
void Display()
{
    ++n;
    printf("n = %d",n);
}
