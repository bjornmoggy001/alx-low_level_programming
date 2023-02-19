#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except q and e
 * then a new line
 * Return: 0 (Correct)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
