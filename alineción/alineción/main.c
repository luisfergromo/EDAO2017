//
//  main.c
//  alineción
//
//  Created by Luis Romo on 28/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
struct Date{
    short day,month,year;// 
    char name[10];
};
struct Ticket{
    unsigned int idCompra;
    double costo;
    struct Date date;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",sizeof(struct Date));
    printf("%d\n",sizeof(struct Ticket));
    return 0;
}
