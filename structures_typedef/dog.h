#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a dog's basic information.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
