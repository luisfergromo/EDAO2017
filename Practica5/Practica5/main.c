//
//  main.c
//  Practica5
//
//  Created by Luis Romo on 11/10/17.
//  Copyright © 2017 luisromo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef enum{Horse,Tower,Pawn,Bishop,King,Queen,Space} PIECE;
typedef enum{Black,White}COLOR;
typedef struct{
    PIECE piece;
    COLOR color;
} Cell;
void initArray(Cell** Array, int N);
void setPiece(PIECE piece,COLOR color,Cell** array, int s,int f);
Cell** initBoard(Cell** cBoard,int n,int m);
void freeBoard(Cell** board, int N);
int main(int argc, const char * argv[]) {
    Cell c;
    c.piece=Horse;
    c.color=White;

    Cell *array=NULL;
    int N=8;
    initArray(&array, N);
    setPiece(Pawn, Black, &array, 2, 5);

    Cell **board=NULL;
    int M=8;
//    board=initBoard(board, N, M);
    freeBoard(board, N);
    return 0;
}

void initArray(Cell** nArray, int N){
    *nArray = (Cell*)malloc(sizeof(Cell)*N);
    Cell *p; //crea un puntero de tipo Cell
    p= *nArray; //se asigna en p el contenido de nArray
    for(int i=0;i<N;i++){
//        (*p).piece=Space;
        p[i].color=White;
        p[i].piece=Space;
    }
}

void setPiece(PIECE piece, COLOR color,Cell** sArray, int s,int f){
    Cell *nArray;
    nArray = *sArray;
    for(s;s<f;s++){
        nArray[s].color=color;
        nArray[s].piece=piece;
    }
}
Cell** initBoard(Cell** cBoard,int n,int m){

    return cBoard;
}
void freeBoard(Cell** aBoard, int N){
    Cell *bBoard;
    bBoard = *aBoard;
    for(int i=0;i<N;i++){
    free(bBoard);
    }
    free(aBoard);
}
