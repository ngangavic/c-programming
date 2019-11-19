
// Program to find the average of n (n < 10) numbers using arrays
#include<stdio.h>

int main()
{
    int marks[10],i,sum=0,n,average;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        printf("enter number %d:",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    average=sum/n;
    printf("Average = %d", average);
    return 0;

}
