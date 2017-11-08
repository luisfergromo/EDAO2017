//
//  queue.c
//  queueFIFO
//
//  Created by Luis Romo on 06/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include "queue.h"
#include <stdlib.h>

struct strNode{
    Type data;
    struct strNode* next;
};

typedef struct strNode Node;

struct strQueue{ //se requiere first, last y el tamaño
    Node *first, *last;
    unsigned int size;
};

Queue queue_create(){
    Queue q = (Queue) malloc(sizeof(struct strQueue));
    q->first=NULL;
    q->last=NULL;
    q->size = 0;
    return q;
}

int queue_size(Queue q){
    if(q!=NULL)
        return q->size;
    else
        return  0;
}
Bool queue_isEmpty(Queue q){
    if(queue_size(q)==0)
        return TRUE;
    else
        return FALSE;
}
Type queue_peek(Queue q){
    if(q!=NULL){
        if (q->first!=NULL)
            return q->first->data;
        else
            return NULL;
        }
        return NULL;
}
void queue_offer(Queue q, Type data){
    if (q!=NULL) {
        Node *new = (Node *) malloc(sizeof(Node));
        new->data= data;
        new->next=NULL;
        
        if (q->size==0) {
            //if the queue is empty
            q->first=new;
            q->last=new;

        }else{
            q->last->next=new;
            q->last=new;
        }
        q->size++;
    }
}

