//
//  Sequence.h
//  TDA
//
//  Created by Luis Romo on 16/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef Sequence_h
#define Sequence_h
typedef struct sequence* Sequence;

Sequence seq_create(int init);
Sequence seq_createStep(int init, int step);
void seq_destory(Sequence s);
int seq_next(Sequence s);

#endif /* Sequence_h */
