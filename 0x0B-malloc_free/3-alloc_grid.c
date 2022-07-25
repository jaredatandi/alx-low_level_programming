#include "main.h"

/**
 * alloc_grid - allocates memory to 2D array
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to pointer of the grid
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);

		}
	}
	for (i =  0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
