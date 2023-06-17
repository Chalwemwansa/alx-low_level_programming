#include <stdio.h>
/**
*main - prints the various types of variables
*Return: 0
*/
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", (unsigned long)sizeof(c), (unsigned long)sizeof(i), (unsigned long)sizeof(l), (unsigned long)sizeof(ll), (unsigned long)sizeof(f));
return (0);
}
