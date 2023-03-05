#include <string.h>
#include <stdio.h>
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
	int i, n1_len, n2_len, diff, longest_len, digit, add1 = 0;

	for (i = 0; n1[i] != '\0'; i++)
		n1_len = i + 1;
	for (i = 0; n2[i] != '\0'; i++)
		n2_len = i + 1;
	diff = n1_len - n2_len;
	if ((n1_len - n2_len) < 0)
	{
		diff = diff * -1;
		longest_len = n2_len;
		longest_str = n2;
	}
	else
	{
		longest_len = n1_len;
		longest_str = n1;
	}
	if ((n1_len + 1) >= size_r || (n2_len + 1) >= size_r)
		return (0);
	for (i = 0; i <= (longest_len - 1); i++)
	{
		if (i <= (longest_len - diff - 1))
			digit = ((n1[n1_len - i - 1]) - 48) + (n2[(n2_len - i - 1)] - 48) + add1;
		else
			digit = (longest_str[diff - i] - 48) + add1;
		add1 = 0;
		if (digit > 9)
		{
			digit = digit % 10;
			add1 = 1;
		}
		r[i] = digit + 48;
	}
	if (add1 == 1)
		r[i] = add1 + 48;
	r[++i] = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int mitad;
	char temp;
	int i;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	mitad = len / 2;
	for (i = 0; i < mitad; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
