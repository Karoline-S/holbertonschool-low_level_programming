#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct with 3 members
 * @name: pointer to a string
 * @age: floating int
 * @owner: pointe to a string
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
