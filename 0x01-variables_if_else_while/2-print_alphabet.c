#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	low = 'a';

	while
		(low <= 'z') {
			putchar(low);
			low++;
		}
	putchar('\n');
	return (0);
}
