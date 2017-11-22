//
//  main.c
//  conjuntosArbolBinario
//
//  Created by Luis Romo on 22/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include "Set.h"

int compareInts(Type a,Type b);
int main(int argc, const char * argv[]) {
    Set s1;
    s1 = set_create(compareInts);

//    printf("Hello, World!\n");
    return 0;
}
int compareInts(Type a,Type b){
    int *valueA = (int*)a;
    int *valueB = (int*)b;
    return *valueA-*valueB;
}
