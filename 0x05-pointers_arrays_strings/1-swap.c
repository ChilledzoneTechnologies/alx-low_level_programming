#include "main.h"

/**
 * swap_int - swap the value of two itegers  a and b.
 * @a : a is a value
 * @b : b is a value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
