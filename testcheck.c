#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* check_string - checks the string for format specifier
* @format: string to be checked
* Return: 0 or 1;
*
*/
int p_string(const char *format)
{
        int a = 0;

        if (format != 0)
        {
                while (format[a] != '\0')
                {
                        putchar(format[a]);
                        a++;
                }
                putchar('\n');
        }
return (a);
}

int check_string(const char *format)
{
        int a = 0;

        if (format != 0)
        {
                for (a = 0; format[a] != '\0'; a++)
                {
                        if (format[a] == '%' && (format[a + 1] == 'c' || format[a + 1] == 's'))
                                return (0);
                        else 
                          return (p_string(format));
                }
                putchar('\n');
        }
	return (0);
}

int main(void)
{
        check_string("%ca");
        return (0);
}
