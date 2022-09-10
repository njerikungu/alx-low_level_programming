#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - prints alphabets in lowercase and uppercase"
*description - using putchar function only
* Return: 0
*/

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'Z'; ch++)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
