#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new data type
 * @name: member for name
 * @owner: member for owner
 * @age: member for age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - new data type for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
