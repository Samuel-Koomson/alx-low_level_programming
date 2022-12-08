#include <stdio.h>
/**
 * main - print the string in the displays size of various types
 * Description: using the main function
 * this program prints the size of various types
 * Return: (0)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	/*
	 *Sizeof operator is used to evaluate the size of a variable
	*
	printf("Size of char: %ld bytes\n", sizeof(c));
	printf("Size of int: %ld bytes\n", sizeof(i));
	printf("Size of long int: %ld bytes\n", sizeof(li));
	printf("Size of long long int %ld bytes\n", sizeof(lli));
	printf("Size of float %ld bytes\n", sizeof(f));
	return (0);
}
