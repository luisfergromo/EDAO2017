//
//  main.c
//  IEEE754
//
//  Created by Luis Romo on 06/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
typedef struct{
    unsigned char b0:1;//bit menos significativo
    unsigned char b1:1;
    unsigned char b2:1;
    unsigned char b3:1;
    unsigned char b4:1;
    unsigned char b5:1;
    unsigned char b6:1;
    unsigned char b7:1;
    unsigned char b8:1;
    unsigned char b9:1;
    unsigned char b10:1;
    unsigned char b11:1;
    unsigned char b12:1;
    unsigned char b13:1;
    unsigned char b14:1;
    unsigned char b15:1;
    unsigned char b16:1;
    unsigned char b17:1;
    unsigned char b18:1;
    unsigned char b19:1;
    unsigned char b20:1;
    unsigned char b21:1;
    unsigned char b22:1;
    unsigned char b23:1;
    unsigned char b24:1;
    unsigned char b25:1;
    unsigned char b26:1;
    unsigned char b27:1;
    unsigned char b28:1;
    unsigned char b29:1;
    unsigned char b30:1;
    unsigned char b31:1; //msb
}Bits;
typedef union{
        //unsigned char signo[32]:1;
    float num;
    Bits b;
}IEE754;

int main(int argc, const char * argv[]) {
    IEE754 r32;
    r32.num= 3.1416;
    printf("Valor: %.4f\n",r32.num);
    printf("Signo: %d\n",r32.b.b31);
    return 0;
}
