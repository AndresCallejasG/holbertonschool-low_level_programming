#include <stdarg.h>
#include <stdio.h>
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
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != 0)
			printf("%s", separator);
	}
	if (n != 0)
		printf("%d", va_arg(valist, int));
	printf("\n");

	va_end(valist);
}
