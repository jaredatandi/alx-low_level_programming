#ifndef DOG
#define DOG

/**
 * struct dog - creates a new type dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
