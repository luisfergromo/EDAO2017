//
//  main.c
//  tareasTodas
//
//  Created by Luis Romo on 28/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include "String.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    String string = { "HOLA" };
    toLowerCase(string);

    return 0;
}
