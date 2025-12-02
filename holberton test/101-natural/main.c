#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long long a = 0;
	unsigned long long b = 1;
	unsigned long long sum;

	for (i = 0 ; i < 50 ; i++)
    {
        sum = a + b;
        b = sum ;
        a = b;
        printf("%llu", sum);

        if (i < 49)
        {
           printf(",");
        }
	}

	printf("\n");
	return (0);
}
