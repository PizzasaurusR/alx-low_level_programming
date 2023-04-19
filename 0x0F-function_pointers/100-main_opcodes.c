#include <stdio.h>
#include <stdlib.h>

/**
 * main - print own opcodes
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *arr;
	int b, i;

	b = atoi(argv[1]);
	arr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}

		printf("02hhx ", arr[i]);
	}
	return (0);
}
