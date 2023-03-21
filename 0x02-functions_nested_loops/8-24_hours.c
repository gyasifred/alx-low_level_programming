#include "main.h"

/**
  *jack_bauer - print the 24 hour cycle of clock
  *
  *Return: void
  */
void jack_bauer(void)
{
	int hr_10, hr_01, min_10, min_01, max_hr;

	hr_10 = 48;
	max_hr = 58;

	while (hr_10 < 51)
	{
		if (hr_10 == 50)
		{
			max_hr = 52;
		}
		hr_01 = 48;
		while (hr_01 < max_hr)
		{
			min_10 = 48;
			while (min_10 < 54)
			{
				min_01 = 48;
				while (min_01 < 58)
				{
					_putchar(hr_10);
					_putchar(hr_01);
					_putchar(':');
					_putchar(min_10);
					_putchar(min_01);
					_putchar(10);
					min_01++;
				}
				min_10++;
			}
			hr_01++;
		}
		hr_10++;

	}
}
