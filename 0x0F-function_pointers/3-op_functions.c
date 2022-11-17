#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function to add two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function to subtract two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function to mulitply two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function to divide two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function to find modulus of two integer
  * @a: first integer
  * @b: second integer
  *
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
