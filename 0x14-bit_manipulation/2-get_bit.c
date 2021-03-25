#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s_index;

	mask = 1;
	s_index = 0;
	while (mask < 2147483648)
	{
		if (s_index == index)
		{
			if ((mask & n) == 0)
				return (0);
			else
				return (1);
		}
		s_index++;
		mask = mask << 1;
	}
	return (-1);
}
