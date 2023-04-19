#include "3-calc.h"

/**
 * main - simple operations func
 * @argc: argument num
 * @argv: argument arr
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int int1, int2, answer;
	char operator;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);
	operator = argv[2];
	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op = '/' || op = '%') && int2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = func(int1, int2);

	return (0);
}
