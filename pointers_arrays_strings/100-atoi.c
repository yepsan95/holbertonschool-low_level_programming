#include <math.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int size, i, primer_num, ult_num;
	int num = 0;
	int minus = 0;

	for (size = 0; *(s + size) != '\0'; size++)

	for (i = 0; i <= size; i++)
	{
		if (s[i] == '-')
			minus++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			primer_num = i;
			break;
		}
		else
		{
			primer_num = -1;
		}
	}
	if (primer_num != -1)
	{
		for (i = primer_num; i <= size; i++)
		{
			if (!(s[i] >= '0' && s[i] <= '9'))
			{
				ult_num = i - 1;
				break;
			}
		}
		for (i = primer_num; i <= ult_num; i++)
		{
			if (minus % 2 == 0)
				num = num + (s[i] - 48);
			else
				num = num - (s[i] - 48);
			if (i < ult_num)
				num = (num * 10);
		}
	}
	else
		num = 0;
	return (num);
}
