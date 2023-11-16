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
int print_string(char *str, int is_S);
int format_specifier_conditions(char format_specifier, va_list ptr);
int _printf(const char *format, ...);
int binary_num(unsigned int num);
int print_u_int(unsigned int n);
int hexa_int(unsigned int n, int upper_case);
int octal_int(unsigned int n);
int print_base_number(unsigned int n, int base, int upper_case);
int pointer_int(void *ptr);
int print_S(int ascii_value);
int format_specifier_conditions_2(char format_specifier, va_list ptr);

#endif
