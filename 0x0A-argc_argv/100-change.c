#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics
 * @i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConverter(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
			else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");

	else
	{
		coin = coinConverter(i);

		printf("%d\n", coin);
	}

	return (0);
}
