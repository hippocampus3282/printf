#include "holberton.h"
/**
  * print_bin - print the binary of the number
  * @num: int
  *
  * Return: number of bytes
  */
int print_hex(int num)
{
	int count = 0;
	
	if (num)
	{	
		if (num >= 1)
		{
			print_hex(num / 16);
			if ((num % 16) > 9 && (num % 16) < 16)
			{
				count += _putchar((num % 16) + 55);
			}
			else
			{
				count += _putchar((num % 16) + '0');
			}
		}
	}
	return (count);
}
