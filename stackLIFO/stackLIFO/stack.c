//
//  stack.c
//  stackLIFO
//
//  Created by Luis Romo on 01/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//
//  ************ Implementación ************

#include "stack.h"
#include <stdlib.h>
struct strNode{
    Type data;
    struct strNode *prior;
};

typedef struct strNode Node;

struct strStack{
    Node *top;
    unsigned int size;
};
Stack stack_create(){
    Stack newStack =(Stack) malloc(sizeof(struct strStack));
    newStack->size=0;
    newStack->top=NULL;
    return  newStack;
}
int stack_size(Stack s){
    //if(!stack_isEmpty(s)){
    if(s!=NULL){
        return s->size;
    }
    return -1;
}
BOOL stack_isEmpty(Stack s){
    if(s!=NULL)
        if(s->size==0)
                return True;
            else
                return False;
        else
            return True;
}

Type stack_top(Stack s){
//    Type data=NULL;
    if(s!=NULL)
        return s->top->data;
    else
        return NULL;
}
void stack_push(Stack s, Type t){
    if (s!=NULL){//el stack existe
        Node* newNode;

        newNode= (Node*)malloc(sizeof(Node));
        newNode->data = t;

        if (s->size==0) {
            newNode->prior=NULL;
//            s->top= newNode;
//            s->size++;
        }else { //si tiene elementos
            newNode->prior=s->top;
//            s->top=newNode;
//            s->size++;
        }
        s->top=newNode;
        s->size++;
    }
}
Type stack_pop(Stack s){
    if(s!=NULL){
        Node *tmp;
        Type data;
        tmp = s->top;
        s->top=s->top->prior;
        s->size--;
        data = tmp->data;
        free(tmp);
        return data;
    } else
        return NULL;
}

void stack_destroy(Stack s){
//    free(s->top->data);
    free(s);
}

