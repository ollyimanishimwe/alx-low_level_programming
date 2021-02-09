#include "holberton.h"
int main(void)
{
	char c[] = "Holberton\n";
	int i;

	for (i = 0; i < 11; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}