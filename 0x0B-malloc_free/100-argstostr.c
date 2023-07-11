#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments passed
 * Return: charcter array
 * @ac:variable to be used in the code
 * @av: variable to be used in the code
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, sum = 0, i4 = 0;
if (ac == 0 || av == NULL)
	return (NULL);
for (int p = 0; p < ac; p++)
{
i = 0;
while (av[p][i] != '\0')
	i++;
i++;
sum += i;
}
s = malloc(sizeof(char) * sum + 1);
if (s == NULL)
{
return (NULL);
}
for (int p1 = 0; p1 < ac; p1++)
{
p2 = 0;
while (av[p1][p2] != '\0')
{
s[i4] = av[p1][p2];
i4++;
p2++;
}
s[i4] = '\n';
i4++;
}
s[i4] = '\0';
}
