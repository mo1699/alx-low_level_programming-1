#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m)
	if else(m == 0)
		printf("Last digit of %d is %d and is and is less than 6 and not 0\n", n, m)
	else
		printf("Last digit of %d is %d and is and is 0\n", n, m)
	return (0);
}
