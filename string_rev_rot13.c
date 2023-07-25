#include "main.h"

/**
 * reverse_print - prints a string in reverse
 * @arg: fucntion argument
 * Return: number of characters printed
 */

int reverse_print (va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		return (-1);
	}
	ptr = string_rev(str);
	if (ptr == NULL)
	{
		return (-1);
	}
	for (len = 0; ptr[len] != '\0'; len++)
	{
		_putchar(ptr[len]);
	}
	free(ptr);
	return (len);
}
