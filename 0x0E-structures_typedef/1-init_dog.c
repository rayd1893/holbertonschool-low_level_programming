/**
 * struct dog - Create struct dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 *
 * Description: Create a struct called dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - To start struct
 * @d: Struct dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 *
 * Return: Start struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
