#include "main.h"
/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 *
 * return: none
 */
void print_number(int n)
{
	int di, firstnon_zero, last_digit;

	di = 100000000;
	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('-');
		last_digit = last_digit * (-1);
	}
	n = (n / 10);
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		last_digit = last_digit * (-1);
	}
	firstnon_zero = 0;
	while (di >= 1)
	{
		if (n / di != 0)
			firstnon_zero = n / di;
		if (firstnon_zero != 0)
			_putchar(n / di + '0');
		n = n % di;
		di /= 10;
	}
	_putchar(last_digit + '0');
}
