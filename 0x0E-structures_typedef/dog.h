#ifndef GRANDPARENT_H
#define GRANDPARENT_H


/**
 * struct dog - Create struct dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 *
 * Description: Create struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
