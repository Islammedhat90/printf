#include "main.h"

/**
  * _printf - function that prints anything.
  *@format: string to prints.
  *
  * Return: number of bytes printed if success, -1 if fails.
  */

int _printf(const char *format, ...)
{
	va_list str;
	int i, j, len, count = 0;

	va_start(str, format);
	if (format == NULL || (format[0] == '%' && _strlen((char *)format) == 1))
		return (-1);
	len = _strlen((char *)format);
	for (i = 0; i < len; i++)
	{
		if (format[i])
		{
			if (format[i] != '%')
				count += _putchar(format[i]);
			else
			{
				while (format[i + 1] != ' ')
					i++;
				if (format[i + 1] == '\0')
					return (-1);
				j = get_specifier(format[i + 1], str);
				if (j != -1)
				{
					count += j;
					i++;
					continue;
				}
				else
					return (j);
			}
		}
	}
	va_end(str);
	return (count);
}
