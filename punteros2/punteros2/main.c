//
//  main.c
//  punteros2
//
//  Created by Luis Romo on 11/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[5]={1,2,3,4,5};
    char *p;

    p=array; //Apunta a la dirección de memoria del primer elemento de array

    printf("%d\n",*p);
    p=&array[1];
    printf("%d\n",*p);
    return 0;
}
