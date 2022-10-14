#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints char
 * @ap: list of args pointing to char to be printed
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints integer
 * @ap: list of args pointing to int to be printed
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: list of args pointing to float to be printed
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: list of args pointing to string to be printed
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: argument type
 */

void print_all(const char * const format, ...)
{
	int i, j = 0;
	va_list ap;
	char *separator = "";

	type funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL} };

	va_start(ap, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;

		while (funcs[i].letter != '\0')
		{
			if (funcs[i].letter == format[j])
			{
				printf("%s", separator);
				funcs[i].func(ap);
				separator = ",";
			}
			i++;

		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
