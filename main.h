#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



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

/* Other functions */
char *string_rev(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
