#include "main.h"
/**
 * print_string - prints string
 * @ptr: pointer to va_list
 *
 * Return: address of the string stored
 */
char *print_string(va_list ptr)
{
	char *str;
	char *string;
	int count = 0, i;
	str = va_arg(ptr, char *);
	while (str[count] != '\0')
		count++;
	string = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		string[i] = str[i];
	string[count] = '\0';

	return (string);
}
