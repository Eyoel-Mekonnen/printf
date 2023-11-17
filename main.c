#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int ui;
	int len2, len1;
	ui = (unsigned int)INT_MAX + 1024;
	len1 = -25;
	
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %d]\n", len2, len2);
	printf("There are %d %% in a hundred\n", 50);
	_printf("There are %d %d %d %d in a hundred\n", -50, 100, 200, 400);
	_printf("There are %i %i %i %i in a hundred\n", -50, 100, 200, 400);
	printf("There are %i %i %i %i in a hundred\n", -50, 100, 200, 400);
	_printf("");
	_printf("A character: %c\n", 'X');
	_printf("A string: %s\n", "Hello World");
	_printf("Percent sign: %%\n");
	_printf("Escape sequences: \n\t\\\n\n");
	_printf("Negative:[%d]\n", -762534);
	_printf("%d\n", 762534);
	_printf("%d\n", 8956321);
	_printf("Negative:[%d]\n", -762534);
         _printf("String:[%s]\n", "I am a string !");  
	  _printf("Character:[%c]\n", 'H');
	  _printf("Unsigned:[%u]\n", ui);
	  _printf("%u\n", -25);
	  _printf("Unsigned octal:[%o]\n", ui);
	  _printf("%b\n", 98);
	  _printf("Unsigned hexadecimal:[%x %x] Also do not forget me am %d \n", ui, 26, 100);
	  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	  _printf("%S\n", "Best\nSchool");
	  _printf("%r\n", "Hello");
	  _printf("%p %p\n", len1, len1);
	  _printf("%r\n", "Hello");
	  printf("There are %d %% in a hundred\n", 50);
	  _printf("There are %d %% in a hundred\n", 50);
	  len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len2);
    _printf("%R\n", "HI");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%!\n");
    _printf("%K\n");
    _printf("%");
    _printf("%c", '\0');
    _printf("%d\n", INT_MIN);
    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("%d\n", -1024);
    _printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    _printf("There is %d bytes in %d KB\n", 1024, 1);
    _printf("%d - %d = %d\n", 1024, 2048, -1024);
    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("%i\n", 1024);
    _printf("%d\n", 0);
    _printf("%d\n", 0);
	return (0);
}
