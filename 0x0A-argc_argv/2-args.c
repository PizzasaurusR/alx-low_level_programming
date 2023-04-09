#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}

	return (0);
}
