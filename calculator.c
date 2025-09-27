#include <stdio.h>
#include <stdbool.h>

#include "calculator.h"

float sum(float num1, float num2)
{
    return num1 + num2;
}
float difference(float num1, float num2)
{
    return num1 - num2;
}
float product(float num1, float num2)
{
    return num1 * num2;
}
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
int modulus(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error! Be serious, you can't get a modulus of %d and 0.", num1);
    }
    else
    {
        return (int)num1 % (int)num2;
    }
}
