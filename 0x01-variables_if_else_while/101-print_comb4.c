#include <stdio.h>
/**
 * main - combo4
 *
 * Return: 0 as usual
 *
 */
int main(void)
{
	int ch;
	int fl;
	int ll;
	int i;

	for (ch = 0; ch <= 1000; ch++)
	{
		fl = ch / 100;
		i = (ch / 10) % 10;
		ll = ch % 10;
		if (fl < i && i < ll)
		{
			putchar(fl + '0');
			putchar(i + '0');
			putchar(ll + '0');
			if (ch < 700)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}

