#include"main.h"
#include<string.h>

/**
 * _strcat - Function used for the concatenation of two strings
 * @*dest: destination of string
 * @*src: source of string
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *dest[] = "Merry";
		char *src[] = "Christmas";
		strcat(*dest, *src);
		puts("concatenated string: %s\n", *dest);
		return 0;
}

