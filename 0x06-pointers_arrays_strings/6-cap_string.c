#include "main.h"

/**
 *cap_string - capitilizes all words of a string
 *@s: string s
 *Return: 0
 */

char *cap_string(char *s)
{
	int i = 0;

	while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;

	if (str[i - 1] == ' ' ||
	    str[i - 1] == '\t' ||
	    str[i - 1] == '\n' ||
	    str[i - 1] == ',' ||
	    str[i - 1] == ';' ||
	    str[i - 1] == '.' ||
	    str[i - 1] == '!' ||
	    str[i - 1] == '?' ||
	    str[i - 1] == '"' ||
	    str[i - 1] == '(' ||
	    str[i - 1] == ')' ||
	    str[i - 1] == '{' ||
	    str[i - 1] == '}' ||
	    i == 0)
		str[i] -= 32;
	i++;
}
