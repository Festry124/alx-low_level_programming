#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from
 * @n: number to start from
 * Return: 1 0r 0
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
