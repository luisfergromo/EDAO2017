//
//  main.c
//  tipoDatosEstructurados
//
//  Created by Luis Romo on 23/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
/*http://cursos.iteso.mx/pluginfile.php/1056946/mod_resource/content/1/Sesion2-3.pdf
    //test 1
*/

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10];
    a[0]=12;
    int array[]={0,1,2,3};//4*4
    int array1[6]={0,1,2,3};//4*6
        // int array2[]={}; //debería de ser error
        //printf("%d\n", sizeof(array1));
        //printf("%d\n", sizeof(a));
        //printf("%d\n", sizeof(a)*10);
    
    /*
     //%p imprime en hexadecimal en base a la longitud del sistema (32 o 64)
     printf("%p \n", a); //dirección de donde inicia el elemento
     printf("%d \n", a[0]); //contenido
     printf("%p \n", &a[0]); //dirección del elemento
    */
    float v=3.1416;
        //printf("%.4f\n",v); //valor
        //printf("%p\n",&v);//dirección
    float m[][3]={1,2,3}; //arreglo de 1x3
    /*
     printf("%.0f\n",m[0][0]);
     printf("%.0f\n",m[0][1]);
     printf("%.0f\n",m[0][2]);
     */

    float m1[][3]={//arreglo de 3x3
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    /*
     printf("%.0f\n",m1[3][0]);
     printf("%.0f\n",m1[3][1]);
     printf("%.0f\n",m1[3][2]);
    */
     float m2[4][3]={}; //inicializa con 0
        //printf("%p\n",m1); //dirección de m1
        //printf("%p\n",&m1[3][2]); //dirección del elemento en su posición 3x2
    char cadena[]="Hola";
    char cadena1[5]="Hola";
    char cadena2[]={'H','o','l','a','\0'};

    printf("%c\n",cadena[0]);
    printf("%s\n",cadena2);


     return EXIT_SUCCESS;
}
