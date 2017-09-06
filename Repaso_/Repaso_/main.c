//
//  main.c
//  Repaso_
//
//  Created by Luis Romo on 05/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
typedef struct {
    int day,month,year; //4*3=12
    char mname[30]; //30
        //padding multiplo de 4 por lo tato tiene 4bits de padding
}Date;

typedef struct{
    unsigned int purchaseId;
    double amount;
    Date purchaseDate;

}Ticket;


int main(int argc, const char * argv[]) {
    Date date1;
    Date fiftyDates[50];
        //printf("%lu\n", sizeof(fiftyDates[5]));
    fiftyDates[5].month=7;
    Date aDate = fiftyDates[5];
    aDate.month=5;
    printf("%d\n%d\n",fiftyDates[5].month,aDate.month);
    int * a;
    char * c;
    printf("%lu\n%lu\n",sizeof(a),sizeof(c));
    int b[4];
    printf("%lu\n%lu\n",sizeof(int),sizeof(b));
    return 0;
}
