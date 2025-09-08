#include <stdio.h>
#include <stdbool.h>
int main (){

printf("\nSimple Calculator\n");
printf("\nOPERATIONS\n");
printf("\n1. Addition (+)");
printf("\n2. Subtraction (-)");
printf("\n3. Multiplication (*)");
printf("\n4. Division  (/)");
printf("\n5. Modulus (%)");

    
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
        case '%':
            result = (int)num1 % (int)num2;
            printf("The operation %.1lf %% %.1lf = %.3lf", num1, num2, result);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    printf("\nThank you for colaboraating with BCS_GRP_6\n");
    return 0;
}
