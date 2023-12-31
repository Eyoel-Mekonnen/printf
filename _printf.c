#include "main.h"
#include <string.h>
/**
 * _printf - produces output according to format
 * @format: the format string passed
 *
 * Return: an integer Value
 */
int _printf(const char *format, ...)
{
	type_format spec[] = {
		{"%c", print_char}, {"%s", print_string}, {"%d", print_integer}, {"%u", print_unsigned_integer}, {"%b", print_binary}, {"%r", reverse_string}, {"%i", print_integer}, {"%o", print_octal},
		{"%x", print_hexalower}, {"%X", print_hexacapital}, {"%S", print_nonchar}, {"%p", print_address}, {"%R", print_rot13}
	};
	int i, j, k, length, buffpos = 0;
	char *buffer;
	char *tmp;
	va_list ptr;

	va_start(ptr, format);
	buffer = (char *)malloc(sizeof(char) * 1500);
	for (i = 0; format[i] != '\0'; i++)
	{
		if ((format == NULL) || (format[0] == '%' && format[1] == '\0') || (!format))
		{
			return ('\0');
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				buffer[buffpos] = '%';
				buffpos++;
				continue;
			}
			else if (format[i] == '\0')
			{
				return (-1);
			}
			j = 0;
			while (spec[j].f_s)
			{
				if ((format[i] == spec[j].f_s[1]) && (format[i - 1] == spec[j].f_s[0]))
				{
					tmp = spec[j].func(ptr);
					length = strlen(tmp);
					for (k = 0; k < length; k++)
					{
						buffer[buffpos] = tmp[k];
						buffpos++;
				}
					free(tmp);
					break;
				}
				else
					j++;
				if (j == 13 && format[i - 1] == '%')
				{
					buffer[buffpos] = '%';
					buffpos++;
					buffer[buffpos] = format[i];
					buffpos++;
					break;
				} 
			}
		}
		else if(format[i] != '%' && format[i] != '\0')
		{
				buffer[buffpos] = format[i];
				buffpos++;
		}
	}
	buffer[buffpos] = '\0';
	write (1,buffer, buffpos);
	free(buffer);
	va_end(ptr);
	return (buffpos);
}
