//
//  main.c
//  typedef
//
//  Created by Luis Romo on 28/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
typedef int Entero;
typedef unsigned int ui32;

typedef ui32 num[10];
typedef float floatArray[10];
typedef floatArray Matriz[10];

struct Date{
    short day,month,year;
    char name[100];
}date; //var date type Fecha

typedef struct Date FECHA;

typedef struct{
    short day,month,year;
    char name[100];
}Date;

    //typedef ui32[100] num; //No es la sintaxis correcta
int main(int argc, const char * argv[]) {
    Entero n=10;
    ui32 num2[10];
    FECHA F1; //para evitar el uso de struct Fecha FECHA

    floatArray f; //10*4
        //printf("%d\n",sizeof(f));

    floatArray f1[10]; //10*10*4=400
        //printf("%d\n",sizeof(f1));


    return 0;
}
