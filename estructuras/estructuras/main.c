//
//  main.c
//  estructuras
//
//  Created by Luis Romo on 23/08/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
struct Data{
    int edad;
    float peso;
    char nombre[10];
};

struct Fecha{
    int dia,mes,anio;
    char nombre[10];
};

struct Ticket{
    unsigned int idCompra;
    double price;
    struct Fecha ticketDate;
};

int main(int argc, const char * argv[]) {
        //printf("%d\n",sizeof(struct data));
        //struct Data d;
        // printf("%u\n",sizeof(struct Data));
        //printf("%u\n",sizeof(d));
   /* struct Fecha f1;
    f1.dia =23;
    f1.mes=8;
    f1.anio=2017;
    strcpy(f1.nombre,"Raul");
    struct Fecha f2 ={23,8,2017,"Juan"};
    printf("Fecha: %d/%d/%d\n",f1.dia,f1.mes,f1.anio);
        //se puede usar gets o puts
    printf("Nombre: %s\n",f1.nombre);
    printf("Nombre: %s\n",f2.nombre);
    */
    struct Ticket myTicket;
    myTicket.idCompra=1;
    myTicket.price=100;
    myTicket.ticketDate.anio=2017;
    myTicket.ticketDate.mes=8;
    myTicket.ticketDate.dia=23;

    //printf("ID:%d\nPrecio:%.0f\n",myTicket.idCompra,myTicket.price);
    struct Ticket tickets[100]; ////100 tickets type Ticket struct
    tickets[0].idCompra=2;
    tickets[0].price=200;
        //printf("ID:%d\nPrecio:%.0f\n",tickets[0].idCompra,tickets[0].price);
        //struct Ticket ticketN[][4];

        //Asignar el mismo valor a los elementos de otra posición igualando
    tickets[3].idCompra=tickets[0].idCompra;
    tickets[3].price=tickets[0].price;
        //printf("ID:%d\nPrecio:%.0f\n",tickets[3].idCompra,tickets[3].price);
    

    return 0;
}
