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

	if (n >= 98)
    {
        while (n > 98)


    }
    else
    {



    }
}
