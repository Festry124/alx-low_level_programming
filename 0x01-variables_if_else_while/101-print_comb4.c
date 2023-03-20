#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing numbers in three
 *
 * Numbers should be printed in ascending order, with three digits
 * Print only the smallest combination of three digits
 * The three digits must be different
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('48' + e);
					putchar('48' + d);
					putchar('48' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
