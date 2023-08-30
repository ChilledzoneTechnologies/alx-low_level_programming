#include "main.h"


/**
 *_memcpy - function that copies memory area
 *@dest:area memory is stored
 *@src: area where  memory is copied
 *@n: number of bytes from memory area 
 *
 *Return:  memory copied with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; r++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
