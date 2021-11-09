#ifndef main.h
#define main.h
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct printf - struct printf
 * @c: The character
 * @hol: The function associated
 */
typedef struct printf
{
	char c;
	int (*hol)(va_list);
} printf_t;
/* functions prototype */

int _printf(const char *format, ...);
int _putchar(char c);
int get_func(const char s, va_list ap);

/* functions prototypes conversion */
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);
#endif
