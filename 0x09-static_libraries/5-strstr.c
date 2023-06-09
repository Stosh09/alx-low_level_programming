#include "main.h"
#include <stddef.h>

/**
 * _strstr - function locating a subtring
 * @haystack: where location is done
 * @needle: the the substring is sourced
 * Return: pointer to the beginning of located substring-
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (x = 0; haystack[x] != 0; x++)
	{
		for (y = 0; needle[y] != 0; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (needle[y] == 0)
		{
			return (haystack + x);
		}
	}

	return (NULL);
}
