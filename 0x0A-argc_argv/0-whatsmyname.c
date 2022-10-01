#include <stdio.h>

/**
 *main - prints name of program
 *@argc: argument count
 *@argv: array of pointers
 *Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
