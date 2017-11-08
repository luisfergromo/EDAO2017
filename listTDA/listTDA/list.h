//
//  list.h
//  listTDA
//
//  Created by Luis Romo on 08/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
typedef void* Type;
typedef struct strList *List;

List list_create(void);
unsigned int list_size(List l);
void list_add(List, Type);
Type list_get(List, int);
#endif /* list_h */
