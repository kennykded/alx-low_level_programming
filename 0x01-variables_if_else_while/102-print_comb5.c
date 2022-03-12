#include <stdio.h>
/**
 * main - last task
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles */
		b = i % 10; /* singles */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles */
			d = j % 10; /* singles */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
