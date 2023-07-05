#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * Return: no return
 * @a: variable used in the code
 */
void print_chessboard(char (*a)[8])
{
int i = 0, i1;
while (a[i] != '\0')
{
	for (i1 = 0; i1 < 8; i1++)
	{
		_putchar(a[i][i1]);
	}
_putchar('\n');
i++;
}
}
