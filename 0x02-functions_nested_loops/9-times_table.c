#include "main.h"

/**
  *times_table - print nine time table
  *
  *Return; void
  */
void times_table(void)
{
	int row, col, tens, ones, prod;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			prod = row * col;
			tens = prod / 10;
			ones = prod % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(ones + 48);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(tens + 48);
				_putchar(ones + 48);
			}
		}
		_putchar(10);	
	}
}
