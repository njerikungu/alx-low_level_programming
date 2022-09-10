#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - prints lowercase alphabets except q and e
*description - using putchar function
*Return: 0
*/

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
else
{
}
putchar ('\n');
return (0);
}

