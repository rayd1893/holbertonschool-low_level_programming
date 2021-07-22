/**
 * print_name - Print string
 * @name: Person´s name
 * @f: Function´s name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
