#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * And a new lune
 * Return: 0 (Correct)
 */
int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	for (cha = 'A'; cha <= 'Z'; cha++)
		putchar(cha);
	putchar('\n');
	return (0);
}
