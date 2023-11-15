#include "main.h"
/**
 * print_rot13 - prints rot13
 * @ptr: pointer of va_list
 *
 * Return: address
 */
char *print_rot13(va_list ptr)
{
	char *str;
	int count = 0, i, j, k = 0;
	char *string;

	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	str = va_arg(ptr, char *);
	while (str[count] != '\0')
		count++;
	string = (char *)malloc(sizeof(char) * (count + 1));
	for (i = 0; i < count; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				string[k] = b[j];
				k++;
			}
		}
	}
	string[count] = '\0';
	return (string);
}
