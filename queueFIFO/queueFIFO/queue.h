//
//  queue.h
//  queueFIFO
//
//  Created by Luis Romo on 06/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
typedef void *Type;
typedef struct strQueue *Queue;
typedef  enum{FALSE,TRUE} Bool;

Queue queue_create(void);
int queue_size(Queue queue);
Bool queue_isEmpty(Queue queue);
Type queue_peek(Queue);
void queue_offer(Queue, Type);
Type queue_poll(Queue);

#endif /* queue_h */
