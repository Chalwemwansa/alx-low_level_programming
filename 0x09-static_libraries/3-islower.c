#include "main.h"
/**
 * _islower - returns 1 if lowercase and 0 otherwise
 * Return: 1 if lowercase and 0 otherwise
 * @c:an integer
 */
int _islower(int c)
{
/*
*int c;
*/
if (c >= 97 && c <= 122)
{
_putchar('\n');
return (1);
}
else
{
_putchar('\n');
return (0);
}
}
