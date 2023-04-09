#include <stdio.h>
#include "main.h"

/**
 * main - print num arguments passed to program
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
