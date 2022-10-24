#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the number of minimum coins to make change
* @argc: Number of arguments passed to the program
* @argv: Arrat of pointers to the arguments
*
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int x;
	int y = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
		printf("0\n");
	while (x)
	{
		y++;
		if ((x - 25) >= 0)
		{
			x = x - 25;
			continue;
		}
		if ((x - 10) >= 0)
		{
			x = x - 10;
			continue;
		}
		if ((x - 5) >= 0)
		{
			x = x - 5;
			continue;
		}
		if ((x - 2) >= 0)
		{
			x = x - 2;
			continue;
		}
		if ((x - 1) >= 0)
			x = x - 1;
	}
	printf("%d\n", y);
	return (0);
}
