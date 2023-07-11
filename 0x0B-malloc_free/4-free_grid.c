#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory space
 * Return: void
 * @grid: variable used in the code
 * @height: variable used in the code
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; grid[i]; i++)
{
free(grid[i]);
}
free(grid);
}
