//
//  main.c
//  stackLIFO
//
//  Created by Luis Romo on 01/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include "stack.h"

int main(int argc, const char * argv[]) {
//    stack_create();
    int v1=10,v2=20,v3=30;
    Stack s1,s2;
    s1=stack_create();
    stack_push(s1, &v1);
    stack_push(s1, &v2);
    stack_push(s1, &v3);
    printf("El tamaño de la pila es %d\n", stack_size(s1));
    int *r = (int*)stack_top(s1);
    printf("El elemento en el tope es %d\n", *r);
    /* */
    printf("El tamaño de la pila es %d\n", stack_size(s1));
    r = (int*)stack_pop(s1);
    printf("El elemento en el tope es %d\n", *r);
    /* */
    printf("El tamaño de la pila es %d\n", stack_size(s1));
    r = (int*)stack_pop(s1);
    printf("El elemento en el tope es %d\n", *r);

    /* */
    printf("El tamaño de la pila es %d\n", stack_size(s1));
    r = (int*)stack_pop(s1);
    printf("El elemento en el tope es %d\n", *r);

    /*
        printf("El tamaño de la pila es %d\n", stack_size(s1));
        r = (int*)stack_pop(s1);
        printf("El elemnto en el tope es %d\n", *r);
    */
    stack_destroy(s1);
    return 0;
}
