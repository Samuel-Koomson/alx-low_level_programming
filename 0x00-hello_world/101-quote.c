#include <unistd.h>

/**
 * main - print a string that displays and that piece of art is useful
 *
 * Description: this program prints and that piece of art
 * Return: Always (1) success
 */

int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, s, 59);
return (1);
}
