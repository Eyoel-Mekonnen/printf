#include "main.h"

/**
 * reverse_string - reverses a string
 * @ptr: pointer of type va_list
 *
 * Return: Adress of reversed string
 */
char *reverse_string(va_list ptr)
{
	int i, count = 0, j = 0;
	char *tmp;
	char *reverse;

	tmp = va_arg(ptr, char *);
	while (tmp[count] != '\0')
		count++;
	reverse = (char *)malloc(sizeof(char) * (count + 1));
	if (reverse == NULL)
		return (NULL);
	for (i = (count - 1); i >= 0; i--)
	{
		reverse[j] = tmp[i];
		j++;
	}
	reverse[count] = '\0';
	return (reverse);
}
