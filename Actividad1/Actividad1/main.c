//
//  main.c
//  Practica1
//
//  Created by Luis Romo on 16/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "cesarCipher.h"

void newLine();
int main(int argc, const char * argv[]) {
    //sizeof regresa el numero de bytes
    //1 byte = 8 bits
    unsigned char a;
    printf("unsigned char mide %d bytes\n", sizeof(a)); //char mide 1 byte = 8 bits
    newLine();
    long long b; //(8*8)=64
    printf("long long mide %d bytes\n", sizeof(b));//long long 8 bytes = 64 bits
    newLine();
    int c; // (8*4)=32
    printf("El tamaño en bytes de int es: %d\n", sizeof(c)); //int 4 bytes = 32 bits
    newLine();
    float f;
    printf("float mide %d bytes\n", sizeof(f)); //float 4 bytes = 32 bits
    newLine();
    short edad =35;
    printf("short edad mide %d bytes\n", sizeof(edad));
    newLine();
    char opcion = 'C';
    printf("Opción mide %d bytes\n", sizeof(opcion));
    newLine();
    double var;
    printf("Var mide %d bytes\n", sizeof(var));
    newLine();
    float temperatura[20];
    printf("Temperatura mide %d bytes\n", sizeof(temperatura));
    newLine();
    int edad1[10][30];
    printf("int edad [10][30] mide %d bytes\n", sizeof(edad1[10][13]));
    //cesarCipher();
    return 0;
}
void newLine(){
    printf("\n");
}
