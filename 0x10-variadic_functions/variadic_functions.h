#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct print_types - Struct type
 *
 * @tp: format type
 * @f: function
 */
struct print_types
{
	char *tp;
	void (*f)();
};
typedef struct print_types p_func;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
