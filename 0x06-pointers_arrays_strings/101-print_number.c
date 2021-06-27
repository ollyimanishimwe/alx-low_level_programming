#include "holberton.h"
#include <stdlib.h>
/**
 * print_number - check the code for Holberton School students.
 * @n: is a int number
 * Return: Always 0.
 */
void print_number(int n)
{
int cont = 1, num = n;

if (n < 0)
_putchar('-');

while (num / 10 != 0)
{
cont = cont * 10;
num = num / 10;
}

while ((n / cont != 0) && (cont != 1))
{
_putchar(abs((n / cont)) + '0');

n = n % cont;

if (cont > 1)
cont = cont / 10;

while ((abs(n) < cont) &&(cont > 1))
{
_putchar('0');
cont = cont / 10;
}
}

_putchar(abs(n) + '0');
}
