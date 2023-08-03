#include "main.h"
/**
 * binary_to_uint - converts a number from binary to integer
 *
 * @b: the number in binary passed as an argument
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0, i, sum = 0, mult, m;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
		count++;
	for (i = count - 1; i >= 0; i--)
	{
		mult = 1;
		m = i;
		if (b[count - i - 1] != 49 && b[count - i - 1] != 48)
			return (0);
		while (m > 0)
		{
			mult *= 2;
			m--;
		}
		sum += ((b[count - i - 1] - 48) * mult);
	}
	return (sum);
}
