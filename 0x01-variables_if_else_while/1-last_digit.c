#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *  * Return: 0
 **/

int main(void)
{
		int n;

		srand(time(0));
				n = rand() - RAND_MAX / 2;

				if (n == 0)

					printf("Last digit of %d is 8 and is greater than 5\n", n);

				else if (n < 0)

					printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);

				else

					printf("Last digit of %d is and is 0\n", n);

				return (0);

}
