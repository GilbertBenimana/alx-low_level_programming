#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - a function that prints anything
  * @format: The conversion specifier for printing
  * Description: a function that prints anything
  * Return: returns nothing
  */
void print_all(const char * const format, ...)
{
va_list args;
f_dt form_types[] = {
{ "c", print_a_char },
{ "i", print_a_integer },
{ "f", print_a_float },
{ "s", print_a_char_ptr }
};
unsigned int i = 0;
unsigned int j = 0;
char *separator = "";
va_start(args, format);
while (format != NULL && format[i])
{
j = 0;
while (j < 4)
{
if (format[i] == *form_types[j].identifier)
{
form_types[j].f(separator, args);
separator = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}

/**
  * print_a_char - prints a character of type char
  * @separator: separator
  * @args: variadic arguments
  * Description: prints a character of type char
  * Return: returns nothing
  */
void print_a_char(char *separator, va_list args)
{
printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_a_integer - prints a character of type int
  * @separator: separator
  * @args: variadic arguments
  * Description: prints a character of type int
  * Return: returns nothing
  */
void print_a_integer(char *separator, va_list args)
{
printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_a_float - prints a character of type float
  * @separator: separator
  * @args: variadic arguments
  * Description: prints a character of type float
  * Return: returns nothing
  */
void print_a_float(char *separator, va_list args)
{
printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_a_char_ptr - prints the pointer to type char
  * @separator: separator
  * @args: A list of variadic arguments
  * Description: prints the pointer to type char
  * Return: returns nothing
  */
void print_a_char_ptr(char *separator, va_list args)
{
char *arg = va_arg(args, char *);
if (arg == NULL)
{
printf("%s%s", separator, "(nil)");
return;
}
printf("%s%s", separator, arg);
}
