#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* alloc_grid - matrix pointer
* @width: width
* @height: height
*Return: pointer to the matrix
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int **s;
if (width == 0 || height  == 0)
return (NULL);
s = (int **)malloc(height * sizeof(int *));
	if (s == 0)
		return (NULL);
i = 0;
	while (i < height)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
		}
		i++;
	}
i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			s[i][j] = 0;
			j++;
		}
		i++;
	}
	return (s);
}
