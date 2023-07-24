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
	int j = 0;
	char s[10];

	if (i < 0)
	{
		count += _putchar('-');
		i = i * -1;
	}
	while (i > 9)
	{
		s[j] = (i % 10) + '0';
		i = i / 10;
		j++;
	}
	for (; j >= 0; j--)
		count += _putchar(s[j]);
	return (count);
}

/**
  * print_bin - prints int to binary form
  *@i: int to print.
  *
  * Return: number of bytes printed.otherwise -1 if fails.
  */

int print_bin(unsigned int i)
{
	unsigned int n = i;
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
		count += _putchar(s[j]);
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

		switch (s)
		{
			case 's':
				count = print_string(str);
				break;
			case 'c':
				count = _putchar(va_arg(str, int));
				break;
			case 'd':
				count = print_i(va_arg(str, int));
				break;
			case 'i':
				count = print_i(va_arg(str, int));
				break;
			case '%':
				count = _putchar('%');
				break;
			case 'b':
				count = print_bin(va_arg(str, unsigned int));
				break;
			default:
				return (-1);
		}
		return (count);
}
