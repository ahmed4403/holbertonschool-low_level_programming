#include "main.h"

/**
  * jack_bauer - prints if number is positive, 0 or negative
  * Return: 0
  */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		_putchar(h + '0');
		_putchar(':');
		_putchar(m + '0')
		_putchar('\n');
	}
	return (0);
}