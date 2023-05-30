#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: pointer to new string created (sucess), or NULL (error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, a = 0, b = 0, c = 0;

	while (s1 && s1[b])
		b++;
	while (s2 && s2[c])
		c++;

	s3 = malloc(sizeof(char) * (b + c + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	a = 0;

	if (s1)
	{
		while (i < b)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (b + c))
		{
			s3[i] = s2[a];
			i++;
			a++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
