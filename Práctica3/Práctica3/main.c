//
//  main.c
//  Práctica3
//
//  Created by Luis Romo on 13/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
typedef enum{MASCULINO,FEMENINO} GENERO;

typedef struct{
    char nombre[180];;
    int edad;
    GENERO sexo;
}PERSONA;

void swap(PERSONA *a,PERSONA *b){
    strcpy(b->nombre,a->nombre);
    printf("%s",a->nombre);
}

void printA(char *contenido, int longitud){
    for(int i=0;i<longitud;i++){
        printf("%c ",contenido[i]);
    }
}
typedef union {
    short num:2;
}b;
void ejercicio1(){
        //    PERSONA A,B;
        //    A.nombre[]="Juan";
        //    B.nombre[]="Pedro";
        //    swap(&A, &B);
        //        //printf("%s %d %d",A.nombre,A.edad,A.sexo,B.nombre,B.edad,B.sexo);
}
void ejercicio2(){
    /*
     Escribe	un	programa	en	C,	que	reciba	10	caracteres	del	alfabeto	y	las	almacena	en
     un	arreglo.	Escriba	una	 función	llamada	imprimir que	 reciba	como	parámetro	un
     arreglo	de	caracteres	e	imprima	el	contenido	del	arreglo. Para	recorrer	el	arreglo	y
     acceder a	su	contenido	utilice	un	apuntador.
     */
    char nArray[140]={"ABCDEFGHIJKLMNOPQRS"};
    printA(nArray,10);
}

void ejercicio3(){
    /*
     Escribe	 un	 programa	 que	 lea	 un	 número	 entero	 de	 16	 bits (2bytes)	sin	 signo	 y	 realice	 lo
     siguiente:
     a. Si	el	bit	5	del	número	entero	es	1	entonces	convierta	el	número	en	negativo.
     Para	 esto	 aplique	 al	 valor	 el	 complemento	 a	 1	 y	 posteriormente	 el
     complemento	a	dos. Finalmente	imprima	el	valor	resultante.
     */
}

int main(int argc, const char * argv[]) {
        ejercicio2();
        //ejercicio3();
    return 0;
}

