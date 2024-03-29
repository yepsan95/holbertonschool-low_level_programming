#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function for the calculator
 * @argc: number of arguments
 * @argv: value of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int result;
	char *s;

	s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(s);
	if ((*(s) != '+' && *(s) != '-' && *(s) != '*' && *(s) != '/' && *(s) != '%')
			|| (strlen(s) != 1))
	{
		printf("Error\n");
		exit(99);
	}
	result = (*func)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
