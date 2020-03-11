/**
 * print_name - prints a name;
 *
 * @name: string to print
 * @f : pionter to function used to print
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
