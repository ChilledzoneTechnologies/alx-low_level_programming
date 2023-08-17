#include "main.h"

/**
 * _isalpha - checks if the character is alphabet
 * @c: the character to be checked
 * Return: 1 if character is a letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

