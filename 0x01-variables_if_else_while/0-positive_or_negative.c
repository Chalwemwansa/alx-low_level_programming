#include <stdlib.h>
#include <time.h>
/**
*main -the program takes random numbers and prints whether they are positive or negative
*return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
printf("%d is positive",n);
else if(n == 0)
printf("%d is zero",n);
else
printf("%d is negative",n);
return (0);
}
