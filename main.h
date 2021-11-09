#ifndef main_h
#define main_h
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct printf - struct printf
 * @c: The character
 * @fun: The function associated
 */
typedef struct printf
{
	char c;
	int (*fun)(va_list);
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
int print_b(va_list arg);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_rot13(va_list arg);
int print_rev_string(va_list arg);

#endif/* PRINTF_H */
