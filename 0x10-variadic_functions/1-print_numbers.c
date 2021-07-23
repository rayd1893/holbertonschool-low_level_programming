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

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("%d\n", va_arg(ap, int));

	va_end(ap);

}
