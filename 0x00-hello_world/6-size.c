#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

		printf("size of a char: %d byte(s)\n", (int)sizeof(a));
		printf("size of an int: %d byte(s)\n", (int)sizeof(b));
		printf("size of a long int: %d byte(s)\n", (int)sizeof(c));
		printf("size of a long long int: %d byte(s)\n", (int)sizeof(d));
		printf("size of a float: %d byte(s)\n", (int)sizeof(e));
		return (0);
}
	
