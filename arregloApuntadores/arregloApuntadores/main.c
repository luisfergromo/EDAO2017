//
//  main.c
//  arregloApuntadores
//
//  Created by Luis Romo on 18/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#define N 8
void filtroNombres(char* nombres[N],char letra);

int main(int argc, const char * argv[]) {
    char n1[]={"Andres"};
    char n2[]={"Pablo"};
    char n3[]={"Raúl"};

    char *nombres[] ={n1,"Adriana", n2,n3,"Luis","Álan"};
/*
 int a=10, b=20,c=30;
 int *p[3]={&a,&b,&c};
 printf("Contenido de p[0]: %d\n", *p[0]);
 printf("Contenido de p[1]: %d\n", *p[1]);
 printf("Contenido de p[2]: %d\n", *p[2]);
*/
    filtroNombres(nombres, 'A');
    return 0;
}
void filtroNombres(char* nombres[N],char letra){
    for (int i=0; i<5; i++) {
        if(letra==*nombres[i])
            printf("%s\n",nombres[i]);
    }
}
//void filtroSegunda(char* nombres[N],char* nombre){
//    char *temp;
//    for (int i=0; i<5; i++) {
//        if(letra==*nombres[i])
//            printf("%s\n",nombres[i]);
//    }
//}

