#include "main.h"

/**
 * _strspn - function getting length of a prefix substring
 * @s: initial segment
 * @accept: source segment
 * Return: number of bytes being returned in the initial segment
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
		{
			return (x);
		}
	}
	return (x);
}
