/**
 * is_digit - function that checks if a string contains a non-digit character
 * @s: string being checked
  * Return: 0 or 1 otherwise
 */
int is_digit(char *s)
{
int x = 0;

while (s[x])
{
if (s[x] < '0' || s[x] > '9')
return (0);
x++;
}
return (1);
}

/**
 * _strlen - function that returns length of a string
 * @s: string being evaluated
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int y = 0;

while (s[y] != '\0')
{
y++;
}
return (y);
}

/**
 * errors - function that manage errors for the main function
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - function that multiplies two positive integer  numbers
 * @argc: number of arguments being multiplied
 * @argv: array of arguments being multiplied
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *f1, *f2;
int sam1, sam2, length, x, help, ac1, ac2, *result, y = 0;

f1 = argv[1], f2 = argv[2];
if (argc != 3 || !is_digit(f1) || !is_digit(f2))
errors();
sam1 = _strlen(f1);
sam2 = _strlen(f2);
length = sam1 + sam2 + 1;
result = malloc(sizeof(int) * length);
if (!result)
return (1);
for (x = 0; x <= sam1 + sam2; x++)
result[x] = 0;
for (sam1 = sam1 - 1; sam1 >= 0; sam1--)
{
ac1 = f1[sam1] - '0';
help = 0;
for (sam2 = _strlen(f2) - 1; sam2 >= 0; sam2--)
{
ac2 = f2[sam2] - '0';
help += result[sam1 + sam2 + 1] + (ac1 *ac2);
result[sam1 + sam2 + 1] = help % 10;
help /= 10;
}
if (help > 0)
result[sam1 + sam2 + 1] += help;
}
for (x = 0; x < length - 1; x++)
{
if (result[x])
y = 1;
if (y)
_putchar(result[x] + '0');
}
if (!y)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
