#include "main.h"

/**
 * string_print - prints a string
 * @s: pointer to the string to print
 *
 * Return: number of characters printed
 */
int string_print(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
