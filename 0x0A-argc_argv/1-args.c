#include <stdio.h>

/**
 *main - prints name of program
 *@argc: argument count
 *@argv: argument array
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
