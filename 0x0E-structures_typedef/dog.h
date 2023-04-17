#ifndef DOG
#define DOG

/*
 * struct dog - fuction to display the name, trype and age of god
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;

	float *age;

	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

typedef struct dog dog_t;

#endif
