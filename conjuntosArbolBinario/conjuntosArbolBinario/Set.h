//
//  Set.h
//  conjuntosArbolBinario
//
//  Created by Luis Romo on 22/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef Set_h
#define Set_h

#include <stdio.h>

typedef void* Type;
typedef struct strSet *Set;
typedef int (*CompareFunc)(Type,Type); //Pointer to function
typedef enum{FALSE,TRUE} Bool;

/* Functions Prototype*/
Set set_create(CompareFunc cf);
Bool set_add(Set s, Type t);

#endif /* Set_h */
