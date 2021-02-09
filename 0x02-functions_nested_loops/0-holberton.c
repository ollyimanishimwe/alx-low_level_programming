#include "holberton.h"
/**
* main - prints Holberton, followed by a new line.
*
* Return: 0 (Success)
*/

int main(void)
{
	char *holberton;

	for (holberton = "Holberton\n"; *holberton != '\0'; ++holberton)
		_putchar(*holberton);
	return (0);
}
