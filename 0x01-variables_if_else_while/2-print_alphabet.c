#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - prints alphabets in lowercase
*description - using only putchar function
* Return: 0
*/

int main(void)
{
int ch;
for (int ch = 'A'; ch < = 'z'; ch++)
{
putchar (ch);
}
return (0);
}
