#include "main.h"
#include <string.h>

/**
* *leet - encodes a strings
* @a: pointer to char
* Return a;
*/

char *leet(char *a)
{
	int b = 0;

	int enc[] = {65, 97, 69, 101, 111, 79, 108, 76, 116, 84};

	for (*(a + b) != '0'; (*(a + b) >= 'A' && *(a + b) <= 'z'); b++)
	{
		int c = 0;

		for (c = 0; c < 10; c++)

		if (*(a + b) == enc[c])
		{
			*(a + b) + 65 = 4;
			*(a + b) + 97 = 4;
			*(a + b) + 69 = 3;
			*(a + b) + 101 = 3;
                        *(a + b) + 111 = 0;
                        *(a + b) + 79 = 0;
			*(a + b) + 108 = 7;
			*(a + b) + 76 = 7;
			*(a + b) + 116 = 1;
			*(a + b) + 84 = 7;
		}
	}
	return (a);
}
