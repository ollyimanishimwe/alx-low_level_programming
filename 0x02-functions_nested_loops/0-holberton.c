#include "holberton.h"

int main(void)
{
	char *holberton;

	for (holberton = "Holberton\n"; *holberton != '\0'; ++holberton)
		_putchar(*holberton);
	return (0);
}
