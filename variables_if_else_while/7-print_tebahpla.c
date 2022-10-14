#include <stdio.h>

/**
 * Created by; Onil
 * main, prints the lowercase alphabet in reverse.
 *
 * Return wiil be 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
