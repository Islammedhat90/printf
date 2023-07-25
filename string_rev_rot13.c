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


/**
 * string_rot13 - prints the rot13'ed string
 * @ap: the string to be converted
 * Return: the converted string
 */

int string_rot13(va_list ap)
{
	int i;
	int n;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(ap, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; n <= 52; n++)
		{
			if (str[i] == s[n])
			{
				_putchar(u[n]);
				break;
			}
		}
		if (n == 53)
			_putchar(str[i]);
	}
	return (i);
}
