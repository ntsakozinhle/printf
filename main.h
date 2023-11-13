#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int print_int(int n);
int format_specifier_conditions(char format_specifier, va_list ptr);
int _printf(const char *format, ...);
int print_c(char c);
int print_string(char *str);


#endif
