#include <stdio.h>
/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int ch;
	int fl;
	int ll;

	for (ch = 0; ch <= 100; ch++)
	{
		ll = ch % 10;
		fl = ch / 10;
			if (fl < ll)
			{
				putchar(fl + '0');
				putchar(ll + '0');
				if (ch < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
