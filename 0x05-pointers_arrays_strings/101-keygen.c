#include "holberton.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - generates random valid passwords
* for the program 101-crackme (checksum 2772).
*
* Return: always 0
*/

int main(void)
{
	int acum, num;

	acum = 0;
	num = 0;
	srand(time(NULL));

	while (2772 - acum > 126)
	{
		num = rand() % 93 + 32;
		putchar(num);
		acum = acum + num;
	}
	putchar(2772 - acum);

	return (0);

}
