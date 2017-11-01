//
//  _String_.c
//  TDA
//
//  Created by Luis Romo on 16/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include "_String_.h"
#include <stdio.h>
#include <stdlib.h>

//strlen
unsigned int strLen (char * chars);
//strCopy
void strCpy(char * from,char **to);

struct strString{
    char *chars;
    unsigned int lenth;
};
String create(char* chars){
    String s =(String)malloc(sizeof(struct strString));
    if(s!=0){
        s->chars=NULL;
        s->lenth=strLen(chars);
        strCpy(chars, &s->chars);
        //printf("String creado con la información '%s'\n",chars);
        return s;
    }else //si s==0 regresa la dirección 0 (Nula)
        return 0;
}
void destroy(String s){
    //printf("Destroy\n");
    free(s->chars);
    free(s);
}
void print(String s){
        ////    for (s->chars!=0) {
        ////    printf("%s",s->chars);
        ////    }
}
unsigned int Length(String s){
    return strLen(s->chars);
}

unsigned int strLen (char * chars){
    unsigned int i=0;
//    printf("El tamaño en bytes es de: %lu\n",sizeof(chars)); //8bytes
    while(*chars!='\0'){
        i++;
        chars++;
    }
    return i;//regresa sin el finalizador de cadena '\0'
}

void strCpy(char * from,char **to){
    unsigned int len = strLen(from);
    *to=(char*)malloc(sizeof(char)*(len+1));
//    int i=0;
    char* temp;
    temp = *to;
    for(int i=0;i<=len;i++){
        temp[i]=from[i];
//        *to=*from;
//        to++;
//        from++;
    }
}
