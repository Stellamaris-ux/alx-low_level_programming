#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog's basic info
 * @name: type char
 * @age: type float
 * @owner: type char
 *
 * Description: struct to store dog's info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
