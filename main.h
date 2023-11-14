#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int alpha(int c);
int string(char *str);
void modu(void);
int digit(long int n, int base);
int hexa(long int n, int base);
void binary(int num);
int operation(int argument, va_list args);


#endif
