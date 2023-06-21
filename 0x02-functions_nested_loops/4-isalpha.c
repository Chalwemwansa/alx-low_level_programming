#include "main.h"
/**
 *_isalpha - checks if is a letter
 *Return: 0 if not lower case and 1 if lowercase
 *@c: an integer used
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
_putchar('\n');
}

