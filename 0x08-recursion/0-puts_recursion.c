#include "stdio.h"
#include "main.h"
/*
_puts_recursion prints string followed by new line
On success return 1;
On failure return error  
*/
void _puts_recursion(char *s)
{
    	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
