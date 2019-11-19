#include<stdio.h>
int main()
{
    int divided,divisor,quotient,reminder;
    printf("Enter divided: ");
    scanf("%d",&divided);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = divided/divisor;

    reminder = divided % divisor;

    printf("Quotient %d",quotient);
    printf("Reminder %d",reminder);


}
