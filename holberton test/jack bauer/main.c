#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void jack_bauer(void);

int main(void)
{
    jack_bauer();
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 23 ; a++)
	{
		for (b = 0 ; b <= 59 ; b++)
		{
            _putchar('0' + (a / 10));
            _putchar('0' + (a % 10));
            _putchar(':');
            _putchar('0' + (b / 10));
            _putchar('0' + (b % 10));

            if (!(a == 23 && b == 59))
            {
                _putchar('\n');
            }
		}
	}
}
