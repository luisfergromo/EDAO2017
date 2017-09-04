//
//  main.c
//  alineacionDbits
//
//  Created by Luis Romo on 04/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>

/*
 no todos los compiladores permiten mezclar los tipos

 -Importante:
 Si no se pudiera mezclar los tipos de datos:
 short } 16 bits; de los cuales se desperdician 13
 char } 8 bits; de los cuales se desperdician 5
 } tiene que ser multiplo del dato más grande por lo tanto son 8 bits más
 */
typedef struct {
    short a:10;
        //char b:3;
    unsigned short b:3;
}mixed;

typedef struct{
    float f; //4bytes, sin padding
    short s:1;//2bytes, 15bits de padding
    char c:1;//1byte, 7 bits de padding
    //1byte de padding
    short t:1;//2bytes
}nMixed;

int main(int argc, const char * argv[]) {
    printf("Tamaño en bytes: %lu\n",sizeof(nMixed));
        //2 (16 bits)
//    mixed m;
//    nMixed nM;
//    m.a=2;
//    m.b=15; //3 bits disponibles, no cabe un 15
//    printf("%d\n",m.a);
//    printf("%d\n",m.b);
    return 0;
}
