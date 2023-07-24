#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int get_specifier(char s, va_list str);
int print_d(double d);
int print_i(int i);
int print_string(va_list str);

#endif
