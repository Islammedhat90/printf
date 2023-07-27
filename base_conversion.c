#include "main.h"

<<<<<<< HEAD
int hex_check(__attribute__ ((unused))int i, __attribute__ ((unused))char c)
{
	return (1);
}
=======
int hex_check(int, char){
	return (1);
}

>>>>>>> d73c280d5d213c4e88f43369c5443c0f93b220f2
/**
 * print_hex - prints a number to base16 lowercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = string_rev(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}
