//
//  main.c
//  alineción
//
//  Created by Luis Romo on 28/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
struct Date{
    short day,month,year;//2*3=6bytes
    char name[10];//10*1bytes
};
struct Ticket{
    unsigned int idCompra; //4bytes
        //padding de 2bytes
        //short a;
    double costo;//8bytes
    struct Date date; //16bytes
};
struct struct1{
    char c1,c2; //2*1bytes
    short s1;//2bytes
    int i;//4bytes
};
struct struct2{
    char c1; //1bytes
        //padding 1byte
    short s1;//2bytes
    char  c2;//1bytes
        //padding 1byte
    int i;//4bytes
        //stride de 3bytes
};
struct strcut3{
    short s1;//2bytes
    char c1;//1byte
        //stride de 1byte
};
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",sizeof(struct Date)); //15+1byte=16bytes
    printf("%d\n",sizeof(struct Ticket));//30+2=32bytes
    printf("%d\n",sizeof(struct struct1)); //8bytes
    printf("%d\n",sizeof(struct struct2)); //12bytes
    printf("%d\n",sizeof(struct strcut3)); //4bytes
    return 0;
}
