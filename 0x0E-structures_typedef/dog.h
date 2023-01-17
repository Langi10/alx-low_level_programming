#ifndef _DOG_H_
#define _DOG_H_

/** 
 * dog_t - typedef for struct dog
 *
 */
typedef struct dog dog_t;

/** 
 * struct dog - stores some info about a dog
 * @name: the name of the dog
 * @age: the name of the dog
 * @owner: the name of the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
