#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void print_to_98(int n);

int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			int nbr = i;

			if (i < -9)
			{
				_putchar('-');
				nbr = -nbr;

				_putchar('0' + (nbr / 10));
				_putchar('0' + (nbr % 10));

			} else if (i < 0)
			{
				_putchar('-');
				nbr = -nbr;
				_putchar('0' +  nbr);
			} else if (i < 10)
			{
				_putchar('0' + nbr);
			} else if (i < 100)
			{
				_putchar('0' + (nbr / 10));
				_putchar('0' + (nbr % 10));
			} else if (i >= 100)
			{
				_putchar('0' + (nbr / 100));
				_putchar('0' + ((nbr / 10) % 10));
				_putchar('0' + (nbr % 10));
			}
			if (!(i == 98))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			int nbr = i;

			if (i >= 98 && i < 100)
			{
				_putchar('0' + (nbr / 10));
				_putchar('0' + (nbr % 10));
			} else if (i >= 100)
			{
				_putchar('0' + (nbr / 100));
				_putchar('0' + ((nbr / 10) % 10));
				_putchar('0' + (nbr % 10));
			}
			if (!(i == 98))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
