#include <stdio.h>

/**
 *main- prints size of types on the the computer it is compiled and run on
 *Description- Should produce the exact same output as in the example
 *Return:0 
*/

int main(void)
{
printf("Size of a char: %d byte(s)\n",sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
