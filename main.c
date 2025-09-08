#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nSimple Calculator!\n");

    int num1, num2;

    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("\nEnter second number: ");
    scanf("%d", &num2);

    printf("\nRESULTS OF OPERATIONS:\n");
    printf("The operation %d + %d = %d\n", num1, num2, (num1 + num2));
    printf("The operation %d - %d = %d\n", num1, num2, (num1 - num2));
    printf("The operation %d * %d = %d\n", num1, num2, (num1 * num2));
    printf("The operation %d / %d = %d\n", num1, num2, (num1 / num2));
    printf("The operation %d %% %d = %d\n", num1, num2, (num1 % num2));

    printf("\n\nThank you for the cooperation with BCS group 6!\n");

    return 0;
}
