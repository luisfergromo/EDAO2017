//
//  Sequence.c
//  TDA
//
//  Created by Luis Romo on 16/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "Sequence.h"

//typedef struct {
//    int step;
//    int next;
//}sequence;
struct sequence{
    int step;
    int next;
};

Sequence seq_create(int init){
//    return sequence = malloc(sizeof(struct sequence));
    return seq_createStep(init, 1);
    
}

Sequence seq_createStep(int init, int step){
    Sequence s;
    
    s=0;
    s=(Sequence) malloc(sizeof(struct sequence));
    if(s!=0){
        s->step = step;
        s->next = init;
        return  s;
    }return  0;
}
void seq_destory(Sequence s){
    free(s);
}
int seq_next(Sequence s){
    int a=s->next;
    s->next+=s->step;
    return a;
}

