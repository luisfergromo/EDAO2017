//
//  main.c
//  Practica4
//
//  Created by Luis Romo on 27/09/17.
//  Copyright © 2017 luisromo. All rights reserved.
//
typedef struct{
    unsigned int Id, Existencia;
    char Marca[100], Modelo[100];
    float Precio;
} Auto;

#include <stdio.h>
#include <stdlib.h>
Auto ifExists(Auto *a, int N){
    if(a){
        a = (Auto*)realloc(a,sizeof(Auto)*N);
        a++;
    }
    return *a;
}
Auto nRegistro(Auto *a, int N){
//    Auto *a;
//    printf("Ingrese la cantidad de elementos que desea agregar: \n");
//    scanf("%d",&N);
        a=(Auto*)malloc(sizeof(Auto)*N);
    for(int i=0;i<N;i++){
        printf("Elemento No. %d\n", i+1);
        printf("Ingresa el Id: \n");
        scanf("%d",&a[i].Id);
        printf("Ingresa el marca: \n");
        scanf("%s",a[i].Marca);
        printf("Ingresa el modelo: \n");
        scanf("%s",a[i].Modelo);
        printf("Ingresa el Precio: \n");
        scanf("%f",&a[i].Precio);
        printf("Ingresa el Existencia: \n");
        scanf("%d",&a[i].Existencia);
    }
    for (int i=0; i<N; i++) {
                printf("Elemento No.%d\n",i+1);
                printf("Id: %d\n",a[i].Id);
                printf("Marca: %s\n",a[i].Marca);
                printf("Modelo: %s\n",a[i].Modelo);
                printf("Marca: %.2f\n",a[i].Precio);
                printf("Existencia: %d\n",a[i].Existencia);
                printf("\n");
            }
    ifExists(a,N);
//    }
    return *a;
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

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d",&N);
    Auto *a = (Auto*)malloc(sizeof(Auto));
//    a = (Auto*) realloc(a, sizeof(char)*N); malas prácticas asignar al mismo apuntador
    Auto *temp =(Auto*)realloc(a, sizeof(Auto)*N);
    if(temp!=NULL){
        if(temp!=a)
            free(a);
        a=temp;
    }
    //nRegistro(a);
    //imprimirElementos(a);
    
    //nRegistro();
    printf("Ingrese la cantidad de elementos que desea agregar: \n");
    scanf("%d",&N);
    nRegistro(a, N);
    //imprimirElementos(a,N);
    
//int n;
//    scanf("%d",&n);
//    switch (n) {
//        case 1:
//            nRegistro();
//            break;
//        case 2:
//            //busca por Id y por marca
//            // seek(Id,Marca);
//            break;
//
//        default:
//            break;
//    }
    return 0;
}
