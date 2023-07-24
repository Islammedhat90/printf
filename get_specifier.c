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

int print_i(va_list str)
{
	int count = 0;
	int j = 0;
	signed int n = (signed int)va_arg(str, int);
	char s[10];

	if (i < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	else
	{
	while (n > 9)
	{
		s[j] = (n % 10) + '0';
		n = n / 10;
		j++;
	}
	for (; j >= 0; j--)
		count += write(1, &s[j], 1);
	}
	return (count);
}

/**
  * print_bin - prints int to binary form
  *@i: int to print.
  *
  * Return: number of bytes printed.otherwise -1 if fails.
  */

int print_bin(va_list str)
{
	unsigned int n = va_arg(str, unsigned int);
	int count = 0;
	int j = 0;
	char *s = malloc(sizeof(char) * 10);

	if (s == NULL)
		return (-1);

	while (n != 0)
	{
		s[j] = (n % 2) + '0';
		n = n / 2;
		j++;
	}
	s[j] = n + '0';
	for (; j >= 0; j--)
		count += write(1, &s[j], 1);
	free(s);
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
	char c;

		switch (s)
		{
			case 's':
				count = print_string(str);
				break;
			case 'c':
				c = va_arg(str, int);
				count = write(1, &c, 1);
				break;
			case 'd':
				count = print_i(str);
				break;
			case 'i':
				count = print_i(str);
				break;
			case '%':
				count = write(1, "%", 1);
				break;
			case 'b':
				count = print_bin(str);
				break;
			default:
				return (-1);
		}
		return (count);
}
