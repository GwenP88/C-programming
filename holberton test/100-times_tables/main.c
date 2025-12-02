#include <stdio.h>
#include <unistd.h>

void print_times_table(int n);
int _putchar(char c);

int main(void)
{
    print_times_table(3);
    print_times_table(12);
    print_times_table(20);
    return 0;
}

void print_times_table(int n)
{
	int i, j, res_multi;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n ; i++)
	{
		for (j = 0; j <= n ; j++)
		{
			res_multi = i *j;

			if (j == 0)
				_putchar('0' + res_multi);
			else
			{
				_putchar(',');
				_putchar(' ');

				if (res_multi < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res_multi);
				}
				else if (res_multi < 100)
				{
					_putchar(' ');
					_putchar('0' + (res_multi / 10));
					_putchar('0' + (res_multi % 10));
				}
				else
				{
					_putchar('0' + (res_multi / 100));
					_putchar('0' + ((res_multi / 10) % 10));
					_putchar('0' + (res_multi % 10));
				}
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
