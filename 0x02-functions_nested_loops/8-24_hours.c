#include <unistd.h>
#include "main.h"

/**
*jack_bauer - prints every minute
*Return: 0 for success
*/

void jack_bauer(void)
{
int hrs = 0;
int mins = 0;
int hrs_remainder;
int mins_remainder;
while (hrs <= 23)
{
while (mins <= 59)
{
hrs_remainder = hrs % 10;
mins_remainder = mins % 10;
_putchar(hrs / 10 + '0');
_putchar(hrs_remainder + '0');
_putchar(':');
_putchar(mins / 10 + '0');
_putchar(mins_remainder + '0');
mins++;
_putchar('\n');
}
hrs++;
mins = 0;
}
}
