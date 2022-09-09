#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * entering the main function
 * Return: Always 0 means Success
 * displaying the positive and negative numbers
 *
 */

int main(void)
	/*start of the code*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
