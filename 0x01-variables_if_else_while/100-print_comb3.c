#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 0;
	e = 0;

	while (e < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (e != i && e < i)
			{
				putchar('0' + e);
				putchar('0' + i);
				if (i == 9 && e == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
