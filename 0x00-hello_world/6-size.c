#include <stdio.h>
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int lonlongintType;
	float floatType;

		printf("size of a char: %d byte(s)\n", (int)sizeof(charType));
		printf("size of an int: %d byte(s)\n", (int)sizeof(intType));
		printf("size of a long int: %d byte(s)\n", (int)sizeof(longintType));
		printf("size of a long long int: %d byte(s)\n", (int)sizeof(longlongintType));
		printf("size of a float: %d byte(s)\n", (int)sizeof(floatType));
		return (0);
}
	
