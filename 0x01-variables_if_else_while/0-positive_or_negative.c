#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */

/* betty style doc for function main goes there */
=======
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
>>>>>>> 4f93e7e4d50424af080a61cca5a8507e66b40a25
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if ()
	/* your code goes there */
=======

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

>>>>>>> 4f93e7e4d50424af080a61cca5a8507e66b40a25
	return (0);
}
