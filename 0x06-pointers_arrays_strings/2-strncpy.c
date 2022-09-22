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
	strncpy(dest, src, n);
	return (dest);
}
