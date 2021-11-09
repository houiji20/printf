#include "main.h"
/**
 * print_int - function that prints an integer with helper function.
 * @arg: The string to print, argument pointer
 *
 * Return: counter
 *
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0, rest = 1;
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}

	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}
/**
 * print_char - prints a character
 * @arg: The character to print, argument pointer
 *
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * print_string - prints a string
 * @arg: The string to print, argument pointer
 *
 * Return: i
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	if (s == NULL)
	s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}