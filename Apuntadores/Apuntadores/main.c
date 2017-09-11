//
//  main.c
//  Apuntadores
//
//  Created by Luis Romo on 11/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=5;
    int *b;
    int c=10;
    b =&a;
    printf("               Dir de (a): %p\n",&a);
    printf("             Valor de (a): %d\n",a);
    printf("               Dir de (b): %p\n",&b);
    printf("  Dir de donde apunta (b): %p\n",b);
    printf("Valor de donde apunta (b): %d\n",*b);
    b=&c;
    printf("  Dir de donde apunta (b): %p\n",b);
    printf("Valor de donde apunta (b): %d\n",*b);
    return 0;
}
