#include "main.h"

/**
 * puts2 -  function that prints every other character of a string, starting with the first character.
 * @str: validate the character
 * Return: Always 0.
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
