#include <stdio.h>

int main()
{
    //format strings
    // %d for integer
    // %f for float
    // %c for character
    int num1,num2,answerSum,answerSub,answerDiv,answerMul,answerMod;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    answerSum=num1+num2;
	answerSub=num1-num2;
	answerDiv=num1/num2;
	answerMul=num1*num2;
	answerMod=num1%num2;
    printf("%d + %d = %d", num1,num2,answerSum);
	printf("%d - %d = %d", num1,num2,answerSub);
	printf("%d / %d = %d", num1,num2,answerDiv);
	printf("%d * %d = %d", num1,num2,answerMul);
	printf("%d % %d = %d", num1,num2,answerMod);
	
	return 0;
}

