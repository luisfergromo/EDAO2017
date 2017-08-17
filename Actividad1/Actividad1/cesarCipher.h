//
//  cesarCipher.h
//  Practica1
//
//  Created by Luis Romo on 16/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef cesarCipher_h
#define cesarCipher_h
#include <stdio.h>

void cesarCipher(){
    char array[100], cipher[100];
    int z,i=0;
    printf("This Program will encrypt according to your needs\n");
    printf("Enter the cipher key\n");
    
    scanf("%d",&z);
    printf("Enter the sentence\n");
    scanf("%s",array);
    
    printf("%s\n",cipher);
}

#endif /* cesarCipher_h */
