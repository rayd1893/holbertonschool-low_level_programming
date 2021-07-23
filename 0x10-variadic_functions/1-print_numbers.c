#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers
 * @separator: Separator
 * @n: Number of arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	if (n != 0)
	{
		va_start(ap, n);

		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		printf("%d\n", va_arg(ap, int));

		va_end(ap);
	}
}
