#include "main.h"
/**
 * _printf - print all (printf reecreation)
 * @format: format specifier
 * Return: counpt
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, counpt = 0, hol = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	va_start(arg, format);
	while (*(format + i) && format)
	{
		if (*(format + i) != '%')
		{
			_putchar (*(format + i));
			counpt++;
		}
		if (*(format + i) == '%')
		{
			hol = get_func(*(format + (i + 1)), arg);
			if (hol != 0)
			{
				counpt = counpt + hol;
				i = i + 2;
				continue;
			}
			if (*(format + (i + 1)) == '\0')
			{
				_putchar(*(format + i));
				counpt++;
			}
		}
			i++;
	}
	va_end(arg);
	return (counpt);
}
