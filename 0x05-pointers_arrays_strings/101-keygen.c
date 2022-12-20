#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - for generating password for 101 crackme
 * passwords must be random and valid
 * Return: 0
 */

int main(void)

{
	int password[100];
	int x, pass, word;

	sum = 0;
	srand(time(NULL));
	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		pass += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - pass) - '0' < 78)
		{
			word = 2772 - pass - '0';
			pass += word;
			putchar(word + '0');
			break;
		}
	}
	return (0);
}

