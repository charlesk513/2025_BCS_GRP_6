#include <stdio.h>
//#include "main.c"
//#include "calculator.c"

int main (){
printf("\nSimple Calculator\n");
printf("\nOPERATIONS\n");
printf("\n1. Addition (+)");
printf("\n2. Subtraction (-)");
printf("\n3. Multiplication (*)");
printf("\n4. Division  (/)");
printf("\n5. Modulus (%)\n");
printf("\nThis calculator accomplishes all operations ['+', '-', '*', '/', '%']");
    

    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nRESULTS OF OPERATIONS:\n");
    printf("%d + %d = %d\n", num1, num2, (num1 + num2));
    printf("%d - %d = %d\n", num1, num2, (num1 - num2));
    printf("%d * %d = %d\n", num1, num2, (num1 * num2));
    printf("%d / %d = %d\n", num1, num2, (num1 / num2));
    printf("%d % %d = %d\n", num1, num2, (num1 % num2));

    printf("Thank you for working with us!");
    
    return 0;

}    
