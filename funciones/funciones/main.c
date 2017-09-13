//
//  main.c
//  funciones
//
//  Created by Luis Romo on 13/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>


    //declaración de función
/*
 int duplicar(int a);
 void duplicar2(int *b);
 */
void promedio(int longitud, float *valor);

void duplicar(int a){ //Pase por valor
     a*=2;
}
int duplicar2(int *b){//Pase por referencia
    return *b=(*b)*2;
}
int main(int argc, const char * argv[]) {
    int n=2;
    float array[]={1,2,3,4,5,6,7,8,9};
    promedio(9,array); //no usar sizeof(array)

        //printf("%d\n",duplicar(2));
        //printf("%d\n",duplicar2(&n));
    return 0;
}
void promedio(int longitud,float *valores){ //Es valido: void promedio(int longitud,float valores[]){ o float valores[]
    float suma = 0.0;
    int i;
    for (i=0; i<longitud; i++) {

        suma+=valores[i];
        /* Es valido hacer:
        suma+=*(valores+1);
                        o
        suma+=(*valores);
        valores++;
         */
    }
    printf("%.2f\n",suma/longitud);
}
