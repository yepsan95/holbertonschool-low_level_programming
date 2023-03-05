#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: 1° number
 * @n2: 2° number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: the sum of n1 and n2; 0 if buffer is insufficient
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *longest_str;
	int i, n1_len, n2_len, shortest_len, longest_len, digit, add1;

	for (i = 0; n1[i] != '\0'; i++)
		n1_len = i + 1;
	for (i = 0; n2[i] != '\0'; i++)
		n2_len = i + 1;
	if ((n1_len - n2_len) < 0)
	{
		shortest_len = n1_len;
		longest_len = n2_len;
		longest_str = n2;
	}
	else
	{
		shortest_len = n2_len;
		longest_len = n1_len;
		longest_str = n1;
	}
	if ((n1_len + 1) >= size_r || (n2_len + 1) >= size_r)
		return (0);
	add1 = 0;
	for (i = 1; i <= longest_len; i++)
	{
		if (i <= shortest_len)
			digit = ((n1[n1_len - i]) - 48) + (n2[(n2_len - i)] - 48) + add1;
		else
			digit = (longest_str[size_r - shortest_len - i - 1] - 48) + add1;
		add1 = 0;
		if (digit > 9)
		{
			digit = digit % 10;
			add1 = 1;
		}
		r[i - 1] = digit + 48;
	}
	if (add1 == 1)
		r[i - 1] = add1 + 48;
	rev_string(r);
	return (r);
}
