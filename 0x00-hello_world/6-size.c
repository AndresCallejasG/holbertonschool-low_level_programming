#include <stdio.h>
/**
 * main - Print using printf, the size of various
 * types on the computer it is compiled *
 * Return: 0
 */
int main(void)
{
printf("Size of a char pointer: %d\n", sizeof(char *));
printf("Size of a int pointer: %d\n", sizeof(int *));
printf("Size of a float pointer: %d\n", sizeof(float *));
printf("Size of a long int pointer: %d\n", sizeof(long int *));
printf("Size of a double pointer: %d\n", sizeof(double *));
return (0);
}
