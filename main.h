#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>


int _putchar(char);
int print_int(int n);
int print_c(char c);
int print_string(char *str);
int format_specifier_conditions(char format_specifier, va_list ptr);
int _printf(const char *format, ...);
int binary_num(unsigned int num);
int print_long_int(unsigned int n);
int hexa_int(unsigned int n, int capital);
int octal_int(unsigned int n);
int print_base(unsigned int n, int base, int capital);
int pointer_int(void *ptr);


#endif
