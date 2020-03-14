#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers using a separator.
 *
 * @separator: between numbers print
 * @n: The number of arguments
 *
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != 0)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(valist, int));

	va_end(valist);
}
