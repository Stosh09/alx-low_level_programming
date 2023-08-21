#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function searching a string for any of a set of bytes
 * @s: the string where the search is being done
 * @accept: the string containing the set of bytes being searched
 * Return: a pointer to the byte in s that matches one of the -
 * bytes in accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *b = accept;

	for (; *s != '\0'; s++)
	{
		for (b = accept; *b != '\0'; b++)
		{
			if (*s == *b)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
