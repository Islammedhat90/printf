#include "main.h"

/**
 * p_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int p_address(va_list l, flags_s *f)
{
	/**char *str;
	 *unsigned long int p = 
	 */
	register int count = 0;
	 va_arg(l, unsigned long int);

	(void)f;
	/**
	*if (!p)
	*	return (_putchar("(nil)"));
	*str = convert(p, 16, 1);
	*count += _putchar("0x");
	*count += _putchar(str);
	*/
	return (count);
}
