#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"
#include "calculator.c"

int main()
{
    double result;
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
            if (scanf("%f", &num1) != 1)
            { // clear the invalid response
                printf("Sythax error, value entered not a number\n");
                while (getchar() != '\n')
                    ;
                continue; // restart the loop
            }

            printf("\nEnter the second number; ");
            if (scanf("%f", &num2) != 1)
            { // clear the invalid  response
                printf("\nSythax error, value entered not a number\n");
                while (getchar() != '\n')
                    ;
                continue; // restart the loop
            }
        }
        else
        {
            num1 = result;
            printf("\nThe stored value is %.3f\n", num1);
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf("%s", &operator);

            printf("\nEnter the number; ");
            if (scanf("%f", &num2) != 1)
            { // clear the invalid response
                printf("\nSythax error, value entered not a number\n");
                while (getchar() != '\n')
                    ;
                continue; // restart the loop
            }
        }
        // the switch coditions govern the operator to be used, it calls functions from the source file
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
        // This operation updates the value of the permission variable to manage the type of operation for the next loop
        if (choice == 1)
        {
            permission = 1;
        }
        else if (choice == 2) // this option updates variable permission to 0 which is false in booleans hence execution of the else part in the first if condition
        {
            permission = 0;
        }
        else
        { // This statement breaks the loop when the choice entered is neither 1 nor 2
            printf("\nOption entered not among\n");
            break;
        }
    }
    printf("\nThank you for collaborating with BCS_GRP_6, we appreciate! \n");
    return 0;
}
