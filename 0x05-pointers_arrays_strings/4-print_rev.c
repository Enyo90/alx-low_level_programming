#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse followed by new line
 * @s: print string in reverse
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a = a - 1; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
