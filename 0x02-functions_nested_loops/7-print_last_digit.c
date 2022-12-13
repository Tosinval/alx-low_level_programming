#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: this is the number of interest
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (laast_digit);
}
