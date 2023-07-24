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
	char *s;
	int i, len, count = 0;

	va_start(str, format);
	if (format == NULL || (format[0] == '%' && _strlen((char *)format) == 1))
		return (-1);
	len = _strlen((char *)format);
	for (i = 0; i < len; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			if (format[i + 1])
			{
				i++;
				switch (format[i])
				{
					case 'c':
						count += _putchar(va_arg(str, int));
						break;
					case 's':
						s = va_arg(str, char *);
						count += write(1, s, _strlen(s));
						break;
					case '%':
						count += _putchar('%');
						break;
					default:
						return (-1);
				}
			}
			else
				return (-1);
		}
	}
	return (count);
}
