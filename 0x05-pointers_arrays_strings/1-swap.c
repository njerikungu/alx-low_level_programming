#include "main.h"

/**
 *swap_int - swaps the values of the integers
 *@a: represents integer 1
 *@b: represents integer 2
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
