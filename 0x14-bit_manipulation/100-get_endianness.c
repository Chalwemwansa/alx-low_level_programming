#include "main.h"
/**
 * get_endianness - checks if the computer has little endian or bi
 *
 * Return: 1 if little endian and 0 otherwise
 */
int get_endianness(void)
{
	unsigned int end;
	char *str;

	end = 1;
	str = (char *)&end;
	if (*str)
		return (1);
	else
		return (0);
}
