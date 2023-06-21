#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, p;
for (p = 0; p < 10; p++)
{
for (i = 97; i <= 122; i++)
_putchar(i);
_putchar('\n');
}
}
