#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char *filename;

	filename = FILE;
	printf("%s\n", filename);
	return (0);
}
