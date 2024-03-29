// Program to create a simple calculator
// Performs addition, subtraction, multiplication or division depending the input from user
# include <stdio.h>
int main() {
    char operator;
    double firstNumber,secondNumber;
	
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%.5lf + %.21f = %.2lf",firstNumber, secondNumber, firstNumber+secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber-secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber*secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber/firstNumber);
            break;
        // operator is doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
