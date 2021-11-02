#ifndef DOG
#define DOG

/**
 *struct dog - Define a new type struct dog
 *Return: dog details
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
