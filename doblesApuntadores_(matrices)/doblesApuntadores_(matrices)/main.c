//
//  main.c
//  doblesApuntadores_(matrices)
//
//  Created by Luis Romo on 02/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int **matrix;
    int N,M;
    printf("Indica el tamaño de la matriz (NxM): ");
    scanf("%d %d",&N,&M);
//    matrix = (int**)malloc(sizeof(int *)*N);
    matrix = (int**)malloc(sizeof(int *)*N);
    if(matrix!=0){
        //printf("No se asignó la memoria correctamente");
        for(int i=0;i<N;i++){
             matrix[i]=(int*)malloc(sizeof(int)*M);
            if(matrix[i]==0){
                printf("No se asignó la memoria correctamente para matrix[%d]\n",i);
                return 0;
            }
        }
    }
    for (int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            printf("Dame el valor de (%d,%d):",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    //imprimir elementos
    for (int i =0;i<N;i++){
        printf("\n");
        for(int j =0;j<M;j++){
            printf("%d \t",matrix[i][j]);
        }
    }

    return 0;
}
