#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - returns the sum of a and b
 * @a: first number
 * @b: second number
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a minus b
 * @a: first number
 * @b: second number
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - returns the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: a * b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}