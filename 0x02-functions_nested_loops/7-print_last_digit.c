#include "main.h"

/**
  * print_last_digit - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
int print_last_digit(int n)
{
	 n = n % 10;

	_putchar(n);
	return (n);
}
