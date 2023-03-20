#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for a basic dog
 * @age: Dog's age
 * @name: Dog's name
 * @owner: Dog's owner
 * Description: data structure for dog
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
