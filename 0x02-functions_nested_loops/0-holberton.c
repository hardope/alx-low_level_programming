#include "holberton.h"
/**
 * main - Entry point
 * Description: prints 'Holberton \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "Holberton\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
