#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 *			a 2 dimensional array of integers
 *
 * @width: the width 'cols' of the array
 * @height: the rows of the 2d array
 *
 * Return:	returns a pointer to a 2 dimensional array of integers
 *			Each element of the grid should be initialized to 0
 *		The function should return NULL on failure
 *		If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			while (i-- > 0)
				free(matrix[i]);
			free(matrix);

			return (NULL);
		}
	}

	return (matrix);
}
