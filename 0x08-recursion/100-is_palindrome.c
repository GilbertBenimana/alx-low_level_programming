#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer
  */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: the number to check
  * @i: the iteration count
  *
  * Return: 1 for prime or 0 otherwise
  */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);

if (n % i == 0 && i > 1)
return (0);

if ((n / i) < i)
return (1);

return (check_prime(n, i + 1));
}


#include "holberton.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check if a string is palindrome
  * @s: the string to check
  *
  * Return: integer
  */
int check_palindrome(char *s)
{
int l = _strlen_recursion(s) - 1;

if (*s == s[l])
{
s++;
l--;
}
else
{
return (0);
}

return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length of
  *
  * Return: returns the string length
  */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

s++;
return (_strlen_recursion(s) + 1);
}
