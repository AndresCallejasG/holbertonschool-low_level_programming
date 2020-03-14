#include <stdio.h>
#include <stdarg.h>
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
	va_list valist;
	unsigned int i;
	char *ch;

	va_start(valist, n);

	for (i = 0; i < n ; i++)
	{
		ch = va_arg(valist, char *);
		if (ch == NULL && separator != NULL && i < n - 1)
			printf("(nil)%s", separator);
		else if (separator != NULL && i < n - 1)
			printf("%s%s", ch, separator);
		else
			printf("%s", ch);
	}
	printf("\n");

	va_end(valist);
}
