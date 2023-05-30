#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to newly allocated space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		a[b] = str[b];
	return (a);
}
