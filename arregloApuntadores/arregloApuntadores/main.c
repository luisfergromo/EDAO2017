//
//  main.c
//  arregloApuntadores
//
//  Created by Luis Romo on 18/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
void filtroNombres(char* nombres[5],char letra);

int main(int argc, const char * argv[]) {
    char *nombres[4] ={"Andres","Pablo","Raúl","Luis"};
/*
 int a=10, b=20,c=30;
 int *p[3]={&a,&b,&c};
 printf("Contenido de p[0]: %d\n", *p[0]);
 printf("Contenido de p[1]: %d\n", *p[1]);
 printf("Contenido de p[2]: %d\n", *p[2]);
*/
    filtroNombres(nombres, "A");
    return 0;
}
void filtroNombres(char* nombres[5],char letra){
    for (int i=0; i<5; i++) {

    }
}
