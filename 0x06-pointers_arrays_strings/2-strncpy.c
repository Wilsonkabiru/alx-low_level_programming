#include "main.h"
#include <string.h>
/**
 * _strcpy - for copying purpose
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: string
 */
char *_strcpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
