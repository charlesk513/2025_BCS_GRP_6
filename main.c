#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"
#include "calculator.c"

int main()
{
    printf("\n====Simple Calculator====\n");
    printf("\nOPERATIONS\n");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division  (/)");
    printf("\n5. Modulus (%%)\n");
    while (1)
    {
        if (permission)
        {
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf("%s", &operator);

            printf("\nEnter the first number; ");
            scanf("%f", &num1);

            printf("\nEnter the second number; ");
            scanf("%f", &num2);
        }
        else
        {
            num1 = result;
            printf("The stored value is %.3f\n", num1);
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf("%s", &operator);

            printf("\nEnter the number; ");
            scanf("%f", &num2);
        }
        switch (operator)
        {
        case '+':
            result = sum(num1, num2);
            printf("\nThe operation %.1f + %.1f = %.3f", num1, num2, result);
            break;

        case '-':
            result = difference(num1, num2);
            printf("\nThe operation %.1f - %.1f = %.3f", num1, num2, result);
            break;
        case '*':
            result = product(num1, num2);
            printf("\nThe operation %.1f * %.1f = %.3f", num1, num2, result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("\nError! Division by zero.");
            }
            else
            {
                result = quotient(num1, num2);
                printf("\nThe operation %.1f / %.1f = %.3f", num1, num2, result);
            }
            break;
        case '%':
            result = modulus((int)num1, (int)num2);
            printf("\nThe operation %.1lf %% %.1lf = %.3lf", num1, num2, result);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("\nError! operator is not correct");
            break;
        }
        // permission to go on for a new or former calculation
        printf("\n\nOPERATIONS");
        printf("\n1. New operation");
        printf("\n2. Continue with the last answer\n\n");
        printf("Enter the option you want among (1,2): ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            permission = 1;
        }
        else if (choice == 2)
        {
            permission = 0;
        }
        else
        {
            printf("\nOption entered not among\n");
            break;
        }
    }
    printf("\nThank you for collaborating with BCS_GRP_6, we appreciate! \n");
    return 0;
}