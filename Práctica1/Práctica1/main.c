//
//  main.c
//  Práctica1
//
//  Created by Luis Romo on 30/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    short pID; //2bytes
    char nProduct[9]; //9bytes
        //padding
    int Existencia;//4bytes
    unsigned int pUnitario; //4bytes
}PRODUCTO;//20bytes


int main(int argc, const char * argv[]) {
    printf("El tamaño de producto es: %d\n",sizeof(PRODUCTO));

     /*
      1) Escriba un programa en C que, al recibir como dato un arreglo unidimensional
     desordenado de	N enteros, obtenga como	salida ese mismo arreglo, pero sin los elementos repetidos. (30 pts)
      */
    int N,i,j;
    int a[100];
    int b[100];
    scanf("%d",&N);
    if((N>=1) && (N<100)){
            //printf("%d\n",N);
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
            //comparar valores de de uno por uno
        for(j=0;j<N;j++){

                    //b[i]=a[i];
                printf("%d ",a[j]);
        }
    }
    return 0;
}
