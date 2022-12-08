#include <stdio.h>
int main ()
{
	int integerType;
	char characterType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;
	
	// Sizeof operator is used to evaluate the size of a variable
	printf("Size of int: %ld bytes\n",sizeof(integerType));
	printf("Size of char: %ld bytes\n",sizeof(characterType));
	printf("Size of long int: %ld bytes\n",sizeof(longintegerType));
	printf("Size of long long int %ld bytes\n",sizeof(longlongintegerType));
	printf("Size of float %ld bytes\n",sizeof(floatType));
	return 0;
}
