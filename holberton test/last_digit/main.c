#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int print_last_digit(int);
int _putchar(char c);

int main(void)
{
    int r;

    r = print_last_digit(0);
    _putchar('0' + r);
    _putchar('\n');
    r = print_last_digit(-68964);
    _putchar('0' + r);
    _putchar('\n');
    r = print_last_digit(8354781);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
    _putchar('0' + last);
	return (last);
}
