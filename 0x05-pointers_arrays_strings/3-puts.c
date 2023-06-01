#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string followed by a new line to stdout
 * @str: prints string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
