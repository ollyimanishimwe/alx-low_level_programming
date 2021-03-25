#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the bit at the given index to 1
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 if worked and -1 if did not work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;
	(void) index;

	mask = 1;
	s_index = 0;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			*n  = *n | 1 << index;
			return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
