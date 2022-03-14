/**
 * main- does printing without printf nor puts
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
								59, 1, stderr);
	return (1);
}
