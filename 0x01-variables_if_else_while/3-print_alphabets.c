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
	
	char upr;

	low = 'a';
	upr = 'A';

	while 
		(low <= 'z') {
			putchar(low);
			low++;
		}
	while 
		(upr <+ 'Z') {
			putchar(upr);
			upr++;
		}
	putchar('\n');
	return (0);
}
