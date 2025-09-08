#include <stdio.h>
int main (){
    printf("Simple Calculator");
    char operator;
    double num1, num2;

    printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
    scanf("%c", &operator);

    printf("\nEnter the first number; ");
    scanf("%lf", &num1);

    printf("\nEnter the second number; ");
    scanf("%lf", &num2);

    double result;

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("The operation %.1lf + %.1lf = %.3lf", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("The operation %.1lf - %.1lf = %.3lf", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("The operation %.1lf * %.1lf = %.3lf", num1, num2, result);
            break;

        case '/':
            result = num1 / num2;
            printf("The operation %.1lf / %.1lf = %.3lf", num1, num2, result);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
