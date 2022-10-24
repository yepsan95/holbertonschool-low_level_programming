#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
