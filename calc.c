#include <stdio.h>
#include <stdbool.h>

char operator;
double number1, number2;
int first = 1;
double result;
int choice;

int main()
{
    printf("\n====Simple Calculator====\n");
    printf("\nOPERATIONS\n");
    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division  (/)");
    printf("\n5. Modulus (%)");

    do
    {
        if (first)
        {
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf("%s", &operator);

            printf("\nEnter the first number; ");
            scanf("%lf", &number1);

            printf("\nEnter the second number; ");
            scanf("%lf", &number2);
        }
        else
        {
            number1 = result;
            printf("The stored value is %.3lf\n", number1);
            printf("\nEnter the operator among ['+', '-', '*', '/', '%']: ");
            scanf("%s", &operator);

            printf("\nEnter the number; ");
            scanf("%lf", &number2);
        }
        switch (operator)
        {
        case '+':
            result = number1 + number2;
            printf("The operation %.1lf + %.1lf = %.3lf", number1, number2, result);
            break;

        case '-':
            result = number1 - number2;
            printf("The operation %.1lf - %.1lf = %.3lf", number1, number2, result);
            break;

        case '*':
            result = number1 * number2;
            printf("The operation %.1lf * %.1lf = %.3lf", number1, number2, result);
            break;

        case '/':
            if (number2 == 0)
            {
                printf("Error! Division by zero.");
            }
            else
            {
                result = number1 / number2;
                printf("The operation %.1lf / %.1lf = %.3lf", number1, number2, result);
            }
            break;
        case '%':
            result = (int)number1 % (int)number2;
            printf("The operation %.1lf %% %.1lf = %.3lf", number1, number2, result);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
            break;
        }
        printf("\n\nOPERATIONS");
        printf("\n1. New operation");
        printf("\n2. Continue with the last answer\n\n");
        printf("Enter the option you want among (1,2): ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            first = 1;
        }
        else if (choice == 2)
        {
            first = 0;
        }
        else
        {
            printf("\nOption entered not among\n");
            break;
        }
    } while (1);
    printf("\nThank you for collaborating with BCS_GRP_6, we appreciate! \n");
    return 0;
}
