#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers separated by
 * a comma and a space in ascending order using the putchar function only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

