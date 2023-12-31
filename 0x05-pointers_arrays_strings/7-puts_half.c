#include "main.h"

/**
 * puts_half -function that prints half of a string followed by a new line.
 * @str: validate the character
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0, n;


	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		n = (i + 1) / 2;
		while (str[n] != '\0')
		{
		_putchar(str[n]);
		n++;
		}
	}
	else
	{
		n = (i / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
