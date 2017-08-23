
/*
 * ieee754.c
 *
 *  Created on: 21/08/2017
 *  Author: jfca80
 *  Comentario: este código no esta optimizado, su objetivo es didáctico
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned char b0:1;
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
    unsigned char b31:1;
} bits_32f;

typedef union{
    float n;
    bits_32f bits;
}IEEE754;
void ieee754(){
    IEEE754 n;
    n.n=85.4375;
    int i=0;
    printf("Representación IEEE754 (32 bits) \n");
    printf("Dame un número real: \n");
    scanf("%f", &n.n);
    printf("Signo (1 bit): ");
    printf(" %d \n", n.bits.b31);
    
    printf("Mantisa (8 bits): ");
    printf(" %d ", n.bits.b30);
    printf(" %d ", n.bits.b29);
    printf(" %d ", n.bits.b28);
    printf(" %d ", n.bits.b27);
    printf(" %d ", n.bits.b26);
    printf(" %d ", n.bits.b25);
    printf(" %d ", n.bits.b24);
    printf(" %d \n", n.bits.b23);
    
    printf("Exponente: ");
    printf(" %d ", n.bits.b22);
    printf(" %d ", n.bits.b21);
    printf(" %d ", n.bits.b20);
    printf(" %d ", n.bits.b19);
    printf(" %d ", n.bits.b18);
    printf(" %d ", n.bits.b17);
    printf(" %d ", n.bits.b16);
    printf(" %d ", n.bits.b15);
    printf(" %d ", n.bits.b14);
    printf(" %d ", n.bits.b13);
    printf(" %d ", n.bits.b12);
    printf(" %d ", n.bits.b11);
    printf(" %d ", n.bits.b10);
    printf(" %d ", n.bits.b9);
    printf(" %d ", n.bits.b8);
    printf(" %d ", n.bits.b7);
    printf(" %d ", n.bits.b6);
    printf(" %d ", n.bits.b5);
    printf(" %d ", n.bits.b4);
    printf(" %d ", n.bits.b3);
    printf(" %d ", n.bits.b2);
    printf(" %d ", n.bits.b1);
    printf(" %d ", n.bits.b0);
    
}
int main(){
    ieee754();
    return 0;
}
