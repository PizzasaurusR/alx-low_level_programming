#include <stdio.h>
#include "main.h"

/**
 * mynameis - print name of program
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: Always 0 (Success)
 */

int mynameis(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
