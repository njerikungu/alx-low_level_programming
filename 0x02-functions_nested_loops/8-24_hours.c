#include <unistd.h>
#include "main.h"

/**
*jack_bauer - prints every minute
*Return: 0 for success
*/

void jack_bauer(void)
{
int hrs;
int mins;
int hrs_remainder;
int mins_remainder;
for (hrs = 0; hrs <= 23; hrs++)
while (hrs_remainder = hrs % 10)
{
while (mins_remainder = mins % 10)
{
_putchar(hrs / 10 + '0');
_putchar(hrs_remainder + '0');
_putchar(':');
_putchar(mins / 10 + '0');
_putchar(mins_remainder + '0');
mins++;
_putchar('\n');
}
hrs++
mins = 0;
}
}
