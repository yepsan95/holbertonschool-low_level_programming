#include <stdio.h>
#include "main.h"

/**
 * main - C primary function
 *
 * Return: 0
 */
char main(void)
{
	int i = 0;
	int randomizer;
	char numbers[] = "0123456789";
	char password[10];

	randomizer = rand() % 4;
	for(i = 0; i < 10; i++)
	{
		if (randomizer == 2)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
		}
	}
		return (*password);
}
