#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *		in memory, which contains a copy of the
 *				string given as a parameter.
 *
 * @str: string to be copied
 *
 * Return:	pointer to a new string which is a duplicate of the string str
 *		Returns NULL if str = NULL
 *		Returns NULL if insufficient memory was available
 *
 * Memory for the new string is obtained with malloc,
 *				and can be freed with free
 */

char *_strdup(char *str)
{
	if (str != NULL)
	{
		int size = 0;

		while (str[size++] != '\0')
			;

		if (size)
		{
			int i;
			char *new_str = (char *) malloc(sizeof(char) * size);

			if (new_str != NULL)
				for (i = 0; i <= size; i++)
					new_str[i] = str[i];

			return (new_str);
		}
	}

	return (NULL);
}
