#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character of string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			putchar(str[a]);
		else
			continue;
	}
	putchar('\n');
}
