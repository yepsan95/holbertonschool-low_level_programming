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
	int size;
	int i;
	int num = 0;
	int minus = 0;
	int sum = 0;
	int primer_num;
	int ult_num;

	size = 0;
	while (*(s + size) != '\0')
		size++;
	for (i = 0; i <= size; i++)
	{
		if (s[i] == '+')
			sum++;
		if (s[i] == '-')
			minus++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			primer_num = i;
			break;
		}
	}
	for (i = primer_num; i; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			ult_num = i - 1;
			break;
		}
	}
	if (primer_num == 0)
		ult_num = 0;
	i = primer_num;
	while (i <= ult_num)
	{
		num = num + (s[i] - 48);
		if (i < ult_num)
			num = (num * 10);
		i++;
	}
	if (minus % 2 != 0)
		num = num * -1;
	if (num != 0)
		return (num);
	else
		return (0);
}
