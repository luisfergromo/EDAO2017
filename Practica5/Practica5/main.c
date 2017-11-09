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

/* Prototipo de funciónes */
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
    board=initBoard(board, N, M);
    freeBoard(board, N);
    return 0;
}

void initArray(Cell** nArray, int N){
    *nArray = (Cell*)malloc(sizeof(Cell)*N);
    Cell *p; //crea un puntero de tipo Cell
    p= *nArray; //se asigna en p el contenido de nArray
    for(int i=0;i<N;i++){
        ((*nArray)+i)->piece=Space;
        p[i].color=White;
        p[i].piece=Space;
    }
}

void setPiece(PIECE piece, COLOR color,Cell** sArray, int s,int f){
//    Cell *nArray;
//    nArray = *sArray;
    for(;s<f;s++){
        ((*sArray)+s)->piece=piece;
        sArray[0][s].color=color;
//        nArray[][s].color=color;
//        nArray[s].piece=piece;
    }
}
Cell** initBoard(Cell** cBoard,int n,int m){
    cBoard = (Cell**)malloc(n*sizeof(Cell*));
    int i=0;
    for(i=0;i<m;i++){
        cBoard[i]=(Cell*) malloc(m*sizeof(Cell));
        if(cBoard[i]==NULL){
            printf("ERROR");
            return  NULL;
        }
    }
    int j=0;
    for(i=0;i<m;i++){
        //inicializar con Pawn y White del renglón 0 y 1
        cBoard[0][i].piece=Pawn;
        cBoard[0][i].color=White;

        cBoard[1][i].piece=Pawn;
        cBoard[1][i].color=White;

        for (j=2; j<6; j++) {//El resto de los elementos con piece: Space, y  color: White
            cBoard[j][i].piece=Space;
            cBoard[j][i].color=White;
        }
        //inicializar los renglones 6 y 7 con Piece= Pawn y Color = Black
        cBoard[6][i].piece=Pawn;
        cBoard[6][i].color=Black;
        cBoard[7][i].piece=Pawn;
        cBoard[7][i].color=Black;
    }
    return cBoard;
}
void freeBoard(Cell** aBoard, int N){
//    Cell *bBoard;
//    bBoard = *aBoard;
    for(int i=0;i<N;i++){
        free(aBoard[i]);
    }
    free(aBoard);
}
