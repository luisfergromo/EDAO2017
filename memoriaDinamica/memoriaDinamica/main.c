//
//  main.c
//  memoriaDinamica
//
//  Created by Luis Romo on 25/09/17.
//  Copyright © 2017 luisromo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int edad;
    float estatura;
} PERSONA;
int sum(int *a,int *b);
void reserve(void);
int contar(void);
int contar1(void);

int main(int argc, const char * argv[]) {
    PERSONA *nuevo;
    nuevo = malloc(sizeof(PERSONA));
    nuevo->edad=12;
    nuevo->estatura=1.70;
    printf("%d\n%0.2f\n",nuevo->edad,(*nuevo).estatura);
        //reserve();
//    setbuf(stdout, 0);
//    setbuf(stdin, 0);

//    int *a=malloc(sizeof(int));
//    int *b=malloc(sizeof(int));
//    *a=5;
//    *b=3;
//    printf("La suma es: %d\n",sum(a, b));
//    free(a);
//    free(b);

//    printf("%d \n",contar());
//    printf("%d \n",contar());
//    printf("%d \n",contar1());
//    printf("%d \n",contar1());
//    printf("%d \n",contar1());
    return 0;
}

int contar(){
    int count=0; //no guarda el valor ya que la variable solo existe dentro de la función
    count++;
    return count;
}

int contar1(){
   static int count=0; //si guarda el valor
    count++;
    return count;
}

int sum(int *a,int *b){
    int *sum=malloc(sizeof(int));
    *sum=(*a)+(*b);
    free(sum); //se libera la memoria pero no se borra el valor
    return *sum;
}

void reserve(){
    int n, *num;
    printf("Dame un número: ");
    scanf("%d",&n);
    num = malloc(sizeof(int)*n);
    for (int i=0;i<n;i++){
        printf("Dame un nuevo número: ");
        scanf("%d",&num[i]);
    }
        //
    for (int i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    free(num);
}
