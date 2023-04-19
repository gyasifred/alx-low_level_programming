#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add - Add 2 integers
  *@a: first integer
  *@b: second integer
  *Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - substract 2 integers
  *@a: first integer
  *@b: second integer
  *Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - Multiply 2 integers
  *@a: first integer
  *@b: second integer
  *Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - Divide a by b
  *@a: first integer
  *@b: second integer
  *Return: a / b if or erro if b = 0
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
  *op_mod - Modulo division
  *@a: first integer
  *@b: second integer
  *Return: a % b if or erro if b = 0
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}

