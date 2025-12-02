#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void times_table(void);
int _putchar(char c);

int main(void)
{
    times_table();
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j ++)
		{
		    n = i * j;

			if (j == 0)
			{
			    _putchar('0' + n);

			}
			else
            {
                _putchar(',');
                _putchar(' ');

                if (n < 10)
                {
                    _putchar(' ');
                    _putchar('0' + n);

                }
                else
                {
                    _putchar('0' + (n / 10));
                    _putchar('0' + (n % 10));
                }
			}
		}
		_putchar('\n');
	}
}
