//
//  Set.c
//  conjuntosArbolBinario
//
//  Created by Luis Romo on 22/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include "Set.h"
#include <stdlib.h>

struct strNode {
    Type data;
    struct strNode *left, *right;
};
typedef struct strNode Node;

struct strSet {
    struct strNode *root;
    int size;
    CompareFunc cf;
};
Set set_create(CompareFunc cf){
        //Crea un ejemplar Set con memoria dinámica y asigna NULL, 0 y cf a sus elementos.
    Set set = (Set)malloc(sizeof(struct strSet));
        set->cf = cf;
        set->root = NULL;
        set->size = 0;
    return set;
}
Bool set_add(Set s, Type t){
    if(s){
        //if(s->size==0)
        if(s->root){// si tiene un valor distinto de NULL
            Node *new =(Node*)malloc(sizeof(Node));
            new -> data = t;
            new->left=NULL;
            new->right=NULL;
            s->root = new;
            s->size++;
            return TRUE;
        }else{
            
        }
    }
    return FALSE;
}
