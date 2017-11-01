//
//  main.c
//  Practica4
//
//  Created by Luis Romo on 27/09/17.
//  Copyright © 2017 luisromo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    unsigned int Id, Existencia;
    char Marca[100], Modelo[100];
    float Precio;
} Auto;

Auto ifExists(Auto *a, int N){
    if(a){
        a = (Auto*)realloc(a,sizeof(Auto)*N);
        a++;
    }
    return *a;
}
int nRegistro(Auto *a, int *longitud){
    if(a==0){
        a=(Auto*)malloc(sizeof(Auto));
    if(a==0) return 1;
    (*longitud)+=(*longitud);
    }
    else{
        Auto *temp;
        temp=a;
        (*longitud)+=(*longitud);
        temp =(Auto*)realloc(a, sizeof(a)*(*longitud));
        if(temp==0){
            return 1;
        }else
            a=temp;
            //capturar la información
        printf("Ingresa el Id: \n");
        scanf("%d",&a[*longitud-1].Id);
        printf("Ingresa el marca: \n");
        scanf("%s",a[*longitud-1].Marca);
        printf("Ingresa el modelo: \n");
        scanf("%s",a[*longitud-1].Modelo);
        printf("Ingresa el Precio: \n");
        scanf("%f",&a[*longitud-1].Precio);
        printf("Ingresa el Existencia: \n");
        scanf("%d",&a[*longitud-1].Existencia);
    }
//    for(int i=0;i<N;i++){
//        printf("Elemento No. %d\n", i+1);
//        printf("Ingresa el Id: \n");
//        scanf("%d",&a[i].Id);
//        printf("Ingresa el marca: \n");
//        scanf("%s",a[i].Marca);
//        printf("Ingresa el modelo: \n");
//        scanf("%s",a[i].Modelo);
//        printf("Ingresa el Precio: \n");
//        scanf("%f",&a[i].Precio);
//        printf("Ingresa el Existencia: \n");
//        scanf("%d",&a[i].Existencia);
//    }
//    for (int i=0; i<N; i++) {
//                printf("Elemento No.%d\n",i+1);
//                printf("Id: %d\n",a[i].Id);
//                printf("Marca: %s\n",a[i].Marca);
//                printf("Modelo: %s\n",a[i].Modelo);
//                printf("Marca: %.2f\n",a[i].Precio);
//                printf("Existencia: %d\n",a[i].Existencia);
//                printf("\n");
//            }
//    ifExists(a,N);
//    }
    return 0;
}
void seek (Auto a, int Id, char* Marca){
}

void imprimirElementos(Auto *a, int N){
        for (int i=0; i<N; i++) {
            printf("Elemento No.%d\n",i+1);
            printf("Id: %d\n",a[i].Id);
            printf("Marca: %s\n",a[i].Marca);
            printf("Modelo: %s\n",a[i].Modelo);
            printf("Marca: %.2f\n",a[i].Precio);
            printf("Existencia: %d\n",a[i].Existencia);
            printf("\n");
        }
}
enum {NUEVO=1,BUSCAR,IMPRIMIR,SALIR};
int main(int argc, const char * argv[]) {
    Auto *autos=0;
    int longitud=0;
    int opcion=0;
    do {
        printf("1. Crear nuevo registro\n2. Buscar registro\n3. Imprimir registros\n4. Salir\n");
        scanf("%d",&opcion);
        switch (opcion) {
            case NUEVO:
                nRegistro(autos, &longitud);
                break;
            case BUSCAR:
                break;
            case IMPRIMIR:
                break;
            default:
                printf("Opción no valida\n");
                break;
        }
    } while (opcion!=SALIR);
    return 0;
}
