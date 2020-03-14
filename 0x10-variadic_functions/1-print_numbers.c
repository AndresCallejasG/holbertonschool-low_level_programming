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
	int flag = 1;

	va_start(valist, n);

	if (separator == 0)
		flag = 0;

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i == (n - 1))
			break;
		if (flag)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
