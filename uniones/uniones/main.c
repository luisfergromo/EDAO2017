//
//  main.c
//  uniones
//
//  Created by Luis Romo on 04/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
typedef union { //1 byte
    unsigned char uc;
    char c;
}u1;
typedef struct { //2 bytes
    unsigned char un;
    char num;
}u2;
/* Misma sintaxis, pero union trabaja en el mismo espacio de memoria; sobreescribe los datos
 Dentro de las uniones pueden haber tipos de datos estructurados
 */

    ////Ejercicio RGB

typedef struct {
    unsigned char red,green,blue,alpha;
}RGB;

typedef union{
    RGB rgb;
    unsigned int uInt;
    unsigned char uC[4];
//    unsigned char a;
}COLOR;//4bytes por que int es el tipo de dato más grande.

int main(int argc, const char * argv[]) {
    printf("Tamaño en bytes: %lu\n",sizeof(COLOR));
    COLOR c;
    c.uInt=0;
    c.uC[3]=3;
    printf("Red:%d\nGreen:%d\nBlue:%d\nAlpha:%d\n",
           c.rgb.red,c.rgb.green,c.rgb.blue,c.rgb.alpha);
//    u1 u;
//    printf("Tamaño en bytes: %lu\n",sizeof(u));
//        //u.un=255;
//    u.uc=-2;
//    printf("Interpretado con signo: %d\nInterpretado sin signo: %d\n",u.uc,u.c);

    return 0;
}
