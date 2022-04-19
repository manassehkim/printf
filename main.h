#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);
char *print_d(va_list list);


