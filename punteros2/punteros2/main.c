//
//  main.c
//  punteros2
//
//  Created by Luis Romo on 11/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[5]={1,2,3,4,5};
    int *p;

    p=array; //Apunta a la dirección de memoria del primer elemento de array

//    printf("%d\n",*p);
//    printf("%p\n",p);
//    p++; // recorre en (1byte) las direcciones de memoria
//        //p=&array[1];
//    printf("%d\n",*p);
//    printf("%p\n",p);
    for(int i=0;i<5;i++){
        printf("%d\n",*p);
        p++;
    }
    p=&array[3];
    for(int i=0;i<5;i++){
        printf("%d\n",*p);
        p--;
    }
    return 0;
}
