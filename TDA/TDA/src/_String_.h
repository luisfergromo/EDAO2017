//
//  _String_.h
//  TDA
//
//  Created by Luis Romo on 16/10/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef _String__h
#define _String__h
//prototipos
typedef struct strString *String;

String create(char *); //tring create(char *chars);
void destroy(String);//void destroy(String s);
void print(String);
void println(String);
unsigned int length(String);
char charAt(String, int index); // si index no es válido, devuelve 0
String clone(String);

//String strCpy(char * from,char *to);

#endif /* _String__h */
