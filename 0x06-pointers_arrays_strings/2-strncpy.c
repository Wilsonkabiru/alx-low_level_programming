#include "main.h"
#include <string.h>
/**
 * _strcpy - for copying purpose
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: string
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
