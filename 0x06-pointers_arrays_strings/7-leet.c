#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to Char
 * Return: char.
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
				*(s + i)  = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
