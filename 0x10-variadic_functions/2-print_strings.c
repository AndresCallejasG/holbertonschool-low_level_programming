#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print stringd using a separator.
 *
 * @separator: used between numbers print
 * @n: The number of arguments
 *
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n ; i++)
	{
		ch = va_arg(valist, char *);
		if (ch != 0)
			printf("%s", ch);
		else
			printf("(nil)");
		if (separator != 0 && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
