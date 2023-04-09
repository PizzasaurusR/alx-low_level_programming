#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: Always 0 (Success)
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
