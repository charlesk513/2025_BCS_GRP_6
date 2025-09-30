#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"

/*
function name: sum
arguments: float num1, float num2
description: This function takes two float numbers as arguments and returns their sum.
return type: float
*/
float sum(float num1, float num2)
{
    return num1 + num2;
}
/*
function name: difference
arguments: float num1, float num2
description: This function takes two float numbers as arguments and returns their difference.
return type: float
*/
float difference(float num1, float num2)
{
    return num1 - num2;
}
/*
function name: product
arguments: float num1, float num2
description: This function takes two float numbers as arguments and returns their product.
return type: float
*/
float product(float num1, float num2)
{
    return num1 * num2;
}
/*
function name: quotient
arguments: float num1, float num2
description: This function takes two float numbers as arguments and returns their quotient.
return type: float
*/
float quotient(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("Error! Division by zero.");
    }
    else
    {
        return num1 / num2;
    }
}
/*
function name: modulus
arguments: int num1, int num2
description: This function takes two int numbers as arguments and returns their modulus.
return type: int
*/
int modulus(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error! You can't get a modulus of %d and 0.", num1);
    }
    else
    {
        return (int)num1 % (int)num2;
    }
}
