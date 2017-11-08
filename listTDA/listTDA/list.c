//
//  list.c
//  listTDA
//
//  Created by Luis Romo on 08/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include "list.h"
#include <stdlib.h>

typedef struct {
    Type data;
    struct strNode *prior, *next;
}strNode;

typedef strNode Node;

struct strList{
    Node *first, *last;
    unsigned int size;
};

List list_create(){
    List l = (List)malloc(sizeof(struct strList));
    l->size=0;
    l->first=NULL;
    l->last=NULL;
    return l;
}

unsigned int list_size(List l){
    if(l!=NULL)
        return l->size;
    else
        return -1;
}
//Función para inicializar y crear un nuevo nodo
Node * create_Node(Type data){
    Node *new =(Node*)malloc(sizeof(Node));
    new->data=data;
    new->prior=NULL;
    new->next=NULL;
    
    return new;
}

void list_add(List l, Type data){//Agregar un elemento al final de la lista y Aumentar el size
    if(l!=NULL){
        Node *new = create_Node(data);
        if(l->size==0){
            l->first=new;
            l->last=new;
        }else{
            l->last->next = new;
            new->prior = l->last;
            l->last = new;
        }
        l->size++;
    }
    
}
Type list_get(List l, int p){
//    Type value = NULL;
    int i=0;
    Node *current = NULL;
    if(l!=NULL){
        if((p>=0)&&(p<(l->size))){
             //newNode para desplazar la lista
            current=l->first;
            while(i<p){
                current = current->next;
                i++;
            }
        }
    }
    return l;
}


