#include "main.h"

/**
 * _islower -mcheck lower case. *
 * @c: character in ASCII code
 *  Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
