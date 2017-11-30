//
//  String.c
//  tareasTodas
//
//  Created by Luis Romo on 28/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include "String.h"
String toLowerCase(String string){
    String newString;
    int i = 0;
//    char string[20] = { "HOLA" };
    newString = string;
    for(newString[i]!= 0; newString[i]>=65 && newString[i]<=90;i++){
   // for (newString[i] != NULL;newString[i] >= 65 && newString[i] <= 90;i++) {
        printf("%c", string[i]);
        newString[i] += 32;
        printf("%c", string[i]);
    }
    printf("\n");
    return newString;
}

