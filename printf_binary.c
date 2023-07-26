#include "main.h"

/**
 * printf_binary - prints a binary number
 * @num: the number arguements
 * @result: the printed characters
 * Return: printed charcaters
 */

int printf_binary(unsigned int num, int result)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		result++;
		return (result);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		result++;
	}

	return (result);
}
