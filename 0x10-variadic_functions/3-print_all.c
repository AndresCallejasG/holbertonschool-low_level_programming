#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * p_char - Prints a character
 * @valist: va_list
 * Return: none
 **/
void p_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * p_float - Prints a float
 * @valist: va_list
 * Return: none
 **/
void p_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * p_int - Prints a int
 * @valist: va_list
 * Return: none
 **/
void p_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * p_str - Prints a str
 * @valist: va_list
 * Return: none
 **/
void p_str(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);

	if (str == 0)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints "anything"
 * @format:  list of types of arguments
 *
 * Return: none
 **/
void print_all(const char * const format, ...)
{
	int i, j;
	va_list valist;
	char *separator;
	p_func p_types[] = {
		{"c", p_char},
		{"f", p_float},
		{"i", p_int},
		{"s", p_str},
		{NULL, NULL}
	};

	va_start(valist, format);
	i = 0;
	separator = "";

	while (format != NULL && format[i] != 0)
	{
		j = 0;
		while (p_types[j].f != NULL)
		{
			if (p_types[j].tp[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				p_types[j].f(valist);
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
