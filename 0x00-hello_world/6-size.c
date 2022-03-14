#include <stdio.h>
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int lonlongintType;
	float floatType;

		printf("size of a char: %zu byte(s)\n", sizeof(charType));
		printf("size of an int: %zu byte(s)\n", sizeof(intType));
		printf("size of a long int: %ld byte(s)\n", sizeof(longintType));
		printf("size of a long long int: %lld byte(s)\n", sizeof(longlongintType));
		printf("size of a float: %zu byte(s)\n", sizeof(floatType));
		return (0);
)
	
