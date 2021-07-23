#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prins Strings
 * @separator: Separator
 * @n: Number of elements
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *name;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(ap, char *);

		if (name == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", name);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(ap);
}
