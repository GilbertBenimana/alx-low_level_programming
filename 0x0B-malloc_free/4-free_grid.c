#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees 2 dimensional grid previously created
  * @grid: grid
  * @height: height
  * Description: frees 2 dimensional grid previously created
  * Return: returns nothing
  */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
