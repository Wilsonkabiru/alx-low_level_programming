#include <stdio.h>

/**
 * main - this is a function tha prints all arguments received
 * @argc: argdc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
