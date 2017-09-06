//
//  main.c
//  enum
//
//  Created by Luis Romo on 06/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
/*
 Declarar constantes: ENUMS, DEFINE, CONST

 */
    //#define LUNES = 0;
    //const int LUNES
enum  {LUNES=2, MARTES,MIERCOLES,JUEVES,VIERNES}DIAS;
typedef enum {A, T,M,J,E}E1;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",MARTES);

    return 0;
}
