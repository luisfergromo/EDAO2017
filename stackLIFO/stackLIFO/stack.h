//
//  stack.h
//  stackLIFO
//
//  Created by Luis Romo on 01/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//
//  ************ Interfaz ************

#ifndef stack_h
#define stack_h

#include <stdio.h>

typedef struct strStack* Stack;
typedef void *Type;
typedef enum {False,True}BOOL;

Stack stack_create(void);
/**
 Si la pila no existe regresa -1
 Si la pila existe regresa su size

 @param s Stack
 @return False: -1  True: size
 */
int stack_size(Stack s);
BOOL stack_isEmpty(Stack s);
Type stack_top(Stack s);
void stack_push(Stack s, Type t);
Type stack_pop(Stack s);
void stack_destroy(Stack s);


#endif /* stack_h */
