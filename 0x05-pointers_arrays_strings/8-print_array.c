#include "main.h"

/**
 *print_array - prints elements of an array of integers
 *@a: integer 1
 *@n: integer 2
 *Return: void
 */
void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
printf("%d", a[c]);
if (c != n - 1)
printf(", ");
}
printf("\n");
}
