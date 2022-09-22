#include "main.h"
/**
 * _strcpy - for copying purpose
 * @dest: buffer storing the string copy
 * @src:the source string
 * @n: max number of byte copied
 * Return:returns
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
