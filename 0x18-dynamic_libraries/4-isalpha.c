#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character that is being checked
 *
 * Return: 1 if c is a letter and zero if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
