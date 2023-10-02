#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiply two arg
 * @argv : arguments to be multiplyed
 * @argc : numbers of argues
 * Return: alwayes 0
 **/

int main(int argc, int *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n",argv[1] * argv[2]);
	return (0);
}
