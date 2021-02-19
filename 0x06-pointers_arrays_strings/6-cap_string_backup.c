#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @ch: Pointer to Char
 * Return: char.
 */

char *cap_string(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (i == 0)
			*(ch + i) = *(ch + i) - ' ';
		if (*(ch + i) == ' ' || *(ch + i) == '\t')
			i++;
		else if (*(ch + i) == '\n' || *(ch + i) == ',')
			i++;
		else if (*(ch + i) == ';' || *(ch + i) == '.')
			i++;
		else if (*(ch + i) == '!' || *(ch + i) == '?')
			i++;
		else if (*(ch + i) == '"' || *(ch + i) == '(')
			i++;
		else if (*(ch + i) == ')' || *(ch + i) == '{')
			i++;
		else if (*(ch + i) == '}')
			i++;
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
		{
			*(ch + i) = *(ch + i) - ' ';
			i++;
		}
	}
	return (ch);
}
