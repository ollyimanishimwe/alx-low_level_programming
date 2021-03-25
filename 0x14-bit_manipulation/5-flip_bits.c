#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1;
 * @m: number 2;
 * Return: thenumber of buts needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int c_num;

	c_num = n ^ m;
	count = 0;
	while (c_num > 0)
	{
		if ((c_num & 1) != 0)
			count++;
		c_num = c_num >> 1;
	}
	return (count);
}
