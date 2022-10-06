#include <unistd.h>
#include "main.h"

/**
 * _islower - prints 1 if a character is lowercase and 0 if otherwise
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
