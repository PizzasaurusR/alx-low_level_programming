#include <stdio.h>
#include <stlib.h>

/**
 * main - mul 2 int
 * @argc: num arguments
 * @argv: argument arr
 *
 * Return: answer or 1 if <2 arguments given
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		num = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", num);
	}

	return (0);
}
