#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char);
int print_int(int n);
int print_c(char c);
int print_string(char *str);
int format_specifier_conditions(char format_specifier, va_list ptr);
int _printf(const char *format, ...);
void binary_num(int num);
int print_long_int(long int n);
int hexa_int(long int n, char format_specifier);
int octal_int(long int n);



#endif
