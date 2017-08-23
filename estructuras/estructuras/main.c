//
//  main.c
//  estructuras
//
//  Created by Luis Romo on 23/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
struct Data{
    int edad;
    float peso;
    char nombre[10];
};
struct Fecha{
    int dia,mes,anio;
    char nombre[10];
};
int main(int argc, const char * argv[]) {
        //printf("%d\n",sizeof(struct data));
    struct Data d;
        // printf("%u\n",sizeof(struct Data));
        //printf("%u\n",sizeof(d));
    struct Fecha f1;
    f1.dia =23;
    f1.mes=8;
    f1.anio=2017;
    strcpy(f1.nombre,"Raul");
    struct Fecha f2 ={23,8,2017,"Juan"};
    printf("Fecha: %d/%d/%d\n",f1.dia,f1.mes,f1.anio);
        //se puede usar gets o puts
    printf("Nombre: %s\n",f1.nombre);
    printf("Nombre: %s\n",f2.nombre);
    
    return 0;
}
