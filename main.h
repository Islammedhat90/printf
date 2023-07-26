#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_s;

int _strlen(char *s);
int _printf(const char *format, ...);
int get_specifier(char s, va_list str);
int print_d(double d);
int print_i(va_list str);
int print_string(va_list str);
int print_bin(va_list str);
int reverse_print (va_list arg);
int string_rot13(va_list ap);
int _putchar(char c);
int hex_check(int, char);
int print_hex(va_list list);
int print_address(va_list l, flags_s *f);
int get_flag(char s, flags_s *f);

/* Other functions */
char *string_rev(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int base_len(unsigned int num, int base);
void write_base(char *s);
char *convert(unsigned long int num, int base, int lowercase);

#endif
