//
//  main.c
//  alineción
//
//  Created by Luis Romo on 28/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
struct Date{
    short day,month,year;//12
    char name[10];//3
};
struct Ticket{
    unsigned int idCompra; //4
    double costo;//8
    struct Date date; //18
};
struct struct1{
    char c1,c2;
    short s1;
    int i;
};
struct struct2{
    char c1;
    short s1;
    char  c2;
    int i;
};
struct strcut3{
    short s1;
    char c1;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",sizeof(struct Date));
    printf("%d\n",sizeof(struct Ticket));
    printf("%d\n",sizeof(struct struct1)); //8bytes
    printf("%d\n",sizeof(struct struct2)); //12bytes
    printf("%d\n",sizeof(struct strcut3)); //4bytes
    return 0;
}
