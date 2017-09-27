//
//  main.c
//  ejercicioMemoriaDinámica
//
//  Created by Luis Romo on 25/09/17.
//  Copyright © 2017 luisromo. All rights reserved.
//

/*
     Realiza un programa que por medio de memoria dinámica permita sacar el promedio de N números
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int N;
    int *array;
    float temp=0;
    printf("Introduce un valor: ");
    scanf("%d",&N);
    if(N>=0&&N<=10){
        array=(int*)malloc(sizeof(int)*N);
        for(int i=0;i<N;i++){
            //printf("Introduce en número %d: \n",i+1);
            scanf("%d",&array[i]);
        }
    for (int a=0;a<N;a++){
        temp+=array[a];
    }
    printf("%.2f\n",(temp/N));
    free(array);
    }
    return 0;
}
