#include <stdio.h>
#include "main.h"

/**
* check arguments with _isalpha
* int @c
* Return: 1 for alphabet, 0 if otherwise
*/

int _isalpha(int c)

{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
        else
                return (0);
}
