#include "main.h"

/**
 * int_print - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int int_print(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += int_print(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}