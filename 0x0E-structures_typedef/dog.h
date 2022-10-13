#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes the dog
 * @name: name of the dog
 * @age: how old is that dog?
 * @owner: who owns the dog?
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
