#include <stdio.h>
#include <stdlib.h>


int randomize(int i, int num)
{
	//int i, num;
	for (i = 0; i <= 10; i++)
	{
		num = rand() % 75 + 1;
		printf("%d", num);
	}
}
