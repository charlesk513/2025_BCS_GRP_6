#ifndef CALCULATOR_H
#define CALCULATOR_H

char operator;
float num1, num2;
int permission = 1;
float result;
int choice;

float sum(float num1, float num2);
float difference(float num1, float num2);
float product(float num1, float num2);
float quotient(float num1, float num2);
int modulus(int num1, int num2);

#endif