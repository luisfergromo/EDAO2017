/*
 * Tree.h
 *
 *  Created on: 14/11/2017
 *      Author: administrador
 */

#ifndef TREE_H_
#define TREE_H_

typedef enum {False, True} Bool;
typedef void * Type;
typedef int (*CompareFunc) (Type, Type);
typedef void (*printFunc)(Type t, int spaces);


typedef struct strSet *Set;

Set set_create(CompareFunc function);
unsigned int set_size();
Bool set_add(Set s, Type data);
Bool set_contains(Set s, Type data);
Bool set_remove(Set s, Type data);
Bool set_destroy(Set s);
void set_print(Set s, printFunc pf);

#endif /* TREE_H_ */
