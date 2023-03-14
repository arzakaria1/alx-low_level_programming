#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates to a new memory address
 * @str: character to be duplicated
 * Return: always (success)
 */

char *_strdup(char *str)
{
	char *var;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	var = malloc(sizeof(char) * (i + 1));
	if (var == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		var[j] = str[j];
	return (var);
}
