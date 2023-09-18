#include <stdio.h>
extern int add(int a, int b);
int main(void)
{
	printf("the sum of 2 and 7 is %d", add(2, 7));
	return (0);
}
