#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 * @void: none
 *
 *
 *
 * Return: none
 */
void more_numbers(void)
{
	unsigned char i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
