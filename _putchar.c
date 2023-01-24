#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char ch)
{
return (write(1, &ch, 1));
}
