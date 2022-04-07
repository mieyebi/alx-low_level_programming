#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *s;
        unsigned int i = 0, j = 0, k = 0, l = 0;

        if (s1 != 0)
        {
                while (*(s1 + i) != 0)
                        i++;
        }
        if (s2 != 0)
        {
                while (*(s2 + j) != 0)
                        j++;
        }
        if (n > j)
                n = j;
        s = malloc((n + i + 1) * sizeof(char));
        if (s == 0)
                return (0);
        while (k < i)
        {
                *(s + k) = *(s1 + k);
                k++;
        }
	while (k < (n + i + 1))
        {
                *(s + k) = *(s2 + l);
                k++;
                l++;
        }
        *(s + k) = 0;
        return (s);
}


/**
 *  main - concept introduction
 *
 * Return: 0.
 */
 
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
