#include "main.h"

/**
  * print_string - prints a string
  *@str: argument
  *
  * Return: number of bytes printed.
  */

int print_string(va_list str)
{
	char *st;
	int count = 0;

	st = va_arg(str, char *);
	if (st == NULL)
		st = "(null)";
	count = write(1, st, _strlen(st));
	return (count);
}

/**
  * print_d - prints a double
  *@d: double to print.
  *
  * Return: number of bytes printed.
  */
int print_d(double d)
{
	int i = (int)d + 1;

	return (i);
}

/**
  * print_i - prints an integer
  *@i: integer to print.
  *
  * Return: number of bytes printed.
  */

int print_i(int i)
{
	int count = 0;

	if (i < 0)
	{
		count += _putchar('-');
		i = i * -1;
	}
	while (i > 9)
	{
		count += _putchar((i % 10) + '0');
		i = i / 10;
	}
	count += _putchar(i + '0');
	return (count);
}
/**
  * get_specifier - converts specifier
  *@s: char to convert.
  *@str: argument.
  * Return: number of bytes printed.
  */
int get_specifier(char s, va_list str)
{
	int count = 0;

		switch (s)
		{
			case 's':
				count = print_string(str);
				break;
			case 'c':
				count = _putchar(va_arg(str, int));
				break;
			case 'd':
				count = print_d(va_arg(str, double));
				break;
			case 'i':
				count = print_i(va_arg(str, int));
				break;
			case '%':
				count = _putchar('%');
				break;
			default:
				_putchar('%');
				return (-1);
		}
		return (count);
}
