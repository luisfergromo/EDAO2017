//
//  main.c
//  actividadMatriz
//
//  Created by Luis Romo on 04/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define R 3 //renglones
#define C 2 //filas
typedef struct{
    short day;
    short month;
    short year;
} Date;
void captureDates(Date ** nDate, int r,int c){
    for(int i=0;i<r;i++){
        for (int j=0; j<c; j++) {
            printf("Dame una fecha: %d, %d\n dd/mm/yyyy\n",i,j);
           // nDate[i][j];
            scanf("%hd %hd %hd",&nDate[i][j].day,&nDate[i][j].month,&nDate[i][j].year);
        }
    }
}
int main(int argc, const char * argv[]) {
//    setbuf(stdin, 0);
//    setbuf(stdout,0);
    Date **date;
    date =(Date **)malloc(sizeof(Date *)*R);
    //validar la asignación de memoria
    for (int i=0;i<3; i++) {
        date[i] = (Date *)malloc(sizeof(Date)*C);
        //validación de asignación de memoria
    }
    captureDates(date, 3, 2);
    return 0;
}
