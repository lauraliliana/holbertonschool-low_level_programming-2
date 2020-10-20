#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - defines a structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Structure dog has 3 members
 */
struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
#endif
