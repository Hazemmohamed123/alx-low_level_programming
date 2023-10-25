#include "main.h"

/**
 * _put_recursion - funcation name
 * @s: parameter of the funcation
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
