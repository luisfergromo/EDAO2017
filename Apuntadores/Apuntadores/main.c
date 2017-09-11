//
//  main.c
//  Apuntadores
//
//  Created by Luis Romo on 11/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>

typedef struct{
    float f;
    double d;
    char c;
}abc;

int main(int argc, const char * argv[]) {
    abc t;
    abc *p;
    t.d=23.5;
    t.f=3.12;
    t.c='A';
    p=&t;
    (*p).c='C';
    p->c='B';
    p->d=5.23;
    p->f=2.14;
//    printf("t.d = %.2f\n",t.d);
//    printf("t.f = %.2f\n",t.f);
//    printf("t.c = %c\n",t.c);
    abc *p1;
    p1 = &p;
//        //p1 = *p;
    p1=p; //asigna la dirección de memoria de t
//    printf("t.d = %.2f\n",p1->d);//     t  <
//    printf("t.f = %.2f\n",p1->f);//     |   \
//        printf("t.c = %c\n",  p1->c);//     *p <-*p1

    int *np1, *np2,*np3;
    int n1=5,n2=15,n3=20;
    np1=&n1;
    *np1=25;
    np2=&n1;
    *np2 =5;

    np3=np2; //Valor de n1 = 5
        //np3=np2; //dirección de n1
    printf("Valor contenido en (*np3): %d\n",*np3);
    printf("Dirección (np3): %p\n",np3);
    printf("Dirección (np1): %p\n",np1);
    printf("Dirección (np2): %p\n",np2);
    printf("Dirección (n1) : %p\n",&n1);




//    int a=5;
//    int *b;
//    int c=10;
//    b =&a;
//    printf("               Dir de (a): %p\n",&a);
//    printf("             Valor de (a): %d\n",a);
//    printf("               Dir de (b): %p\n",&b);
//    printf("  Dir de donde apunta (b): %p\n",b);
//    printf("Valor de donde apunta (b): %d\n",*b);
//    b=&c;
//    printf("  Dir de donde apunta (b): %p\n",b);
//    printf("Valor de donde apunta (b): %d\n",*b);

    return 0;
}
