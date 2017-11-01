//
//  main.c
//  Tarea2
//
//  Created by Luis Romo on 23/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int expediente;
    char* nombre;
    int carrera;
    int edad;
} Alumno;

void newStudent(void);
int main(int argc, const char * argv[]) {
    setbuf(stdin, 0);
    setbuf(stdout,0);
    char opt='f';
//    printf("Hello, World!\n");
    do{
        printf(" a. Registrar nuevo alumno\n b. Imprimir datos\n c. Eliminar alumno\n d. Almacenar en archivo\n e. Cargar datos del archivo a memoria\n f. Salir\n");
        scanf("%c\n",&opt);
        switch (opt) {
            case 'a':newStudent();
                break;
            case 'b': //printData();
                break;
            case 'c'://deleteStudent();
                break;
//            default: printf("Opción no valida\n");
//                break;
        }
    }while (opt!='f');
    return 0;
}

void newStudent(){
    Alumno *temp;
    Alumno *nuevoAlumno=(Alumno* )malloc(sizeof(Alumno));
    temp=nuevoAlumno;
    if (nuevoAlumno!=0) {
//        temp= (Alumno*)realloc(nuevoAlumno, sizeof(Alumno)*nuevoAlumno);
    }
}
