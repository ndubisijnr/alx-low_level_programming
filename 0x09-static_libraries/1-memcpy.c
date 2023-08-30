#include "main.h"

/**
* *_memcpy - copies memory area
* @dest: memory area destination
* @src: memory area source
* @n: n bytes of memory area pointing to src
*
* Return: a pointer to dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
