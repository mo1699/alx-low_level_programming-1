#include <stdio.h>
0;276;0c/**
 3* main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned sum;

	for (a=0;a<=1024;++a)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			sum +=a;
			else
				break;
	}
	printf("%u\n",sum);
}
