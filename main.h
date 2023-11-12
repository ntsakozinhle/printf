#ifndef MAIN_H
#define MAIN_H
#define _PRINTF_H
#include <stdarg.h>

int _printf(const char *format, ...);

int alpha(int c);
int string(char *str);
void modu(void);
int digit(long int n, int base);
int operation(char argument, va_list args);


#endif
