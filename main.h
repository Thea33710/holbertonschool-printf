#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct spe
{
  char specifier;
  int (*f)(va_list *);
} spe_t;

int _printf(const char *format, ...);
int (*get_specifier_func(char c))(va_list *);
int _char(va_list *arg);
int _string(va_list *arg);
int _percentage(va_list *arg);

#endif