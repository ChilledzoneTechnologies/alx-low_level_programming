#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s:string to be measured.
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		int i = 1;

		return (i + _strlen_recursion(++s));
	}
	else
		return (0);
}
