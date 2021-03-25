#include "holberton.h"

/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the number
 * @index: index to set
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;

	s_index = 0;
	mask = 1;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			*n = *n & ~(1 << index);
			return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
