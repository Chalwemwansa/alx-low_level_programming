#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 *main - generates some random numbers
 *Return: no return
 */
int main(void)
{
char passw[84];
int index = 0, sum = 0, diff_half1, diff_half2;
srand(time(0));
while (sum < 2772)
{
passw[index] = 33 + rand() % 94;
sum += passw[index++];
}
passw[index] = '\0';
if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
	diff_half1++;
for (index = 0; passw[index]; index++)
{
if (passw[index] >= (33 + diff_half1))
{
passw[index] -= diff_half1;
break;
}
}
for (index = 0; passw[index]; index++)
{
if (passw[index] >= (33 + diff_half2))
{
passw[index] -= diff_half2;
break;
}
}
}
printf("%s", passw);
return (0);
}
