#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - C primary function
 * Return: 1
 */
int main(void)
{
	char text1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, text1, strlen(text1)); 
	return (1);

}
