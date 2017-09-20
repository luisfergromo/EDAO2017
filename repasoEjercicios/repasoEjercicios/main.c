//
//  main.c
//  repasoEjercicios
//
//  Created by Luis Romo on 19/09/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include <stdio.h>
typedef struct{
    int estatura; //1byte = 8bits
    int edad:7;//1byte
    int sexo:1; //2bytes = 16bits de los cuales solo se reserva 1 bit
     int salario; //4bytes = 32bits
}Persona2; //8bytes
typedef struct{
        int edad:7; //2bytes = 16bits de los cuales solo se reservan 1byte
        //1
        //2
        //3
     int salario; //4bytes = 32bits
    int sexo:1; //2bytes = 16bits de los cuales solo se reserva 1 byte
    int estatura; //1byte = 8bits
}Persona; //12 Bytes

typedef union{
    Persona mix;//12
    char carray[3];//3
    short sarray[7];//7
}Umix;//14bytes

typedef struct{
    char hrs:4;
    char minutos:6;
    char segundos:1;
}Hora;

void decSegundo(int hora,int minutos, int segundos){
    segundos--;
    if(segundos<=0){
        minutos--;
        segundos=0;
        if(minutos<=0){
            hora--;
            minutos=0;
            if(hora<=0){
                hora=0;
                minutos=0;
                segundos=0;
            }
        }
    }
    printf("%d:%d.%d\n",hora,minutos,segundos);
}
void aumentaSegundos(int hora,int minutos,int segundos){
    segundos+=1;
    if(segundos>=60){
        minutos++;
        segundos=0;
        if(minutos<=60){
            hora++;
            minutos=0;
        }
    }
    printf("%d:%d.%d\n",hora,minutos,segundos);
}
int main(int argc, const char * argv[]) {
        //printf("%d\n",sizeof(Umix));
        //Umix u;
        // u.sarray[4]=10;
        //u.carray[8]=10;
        //u.carray[123]={12,2,1};
        //printf("%d\n",u.sarray[4]);
//////    printf("%lu\n",sizeof(Umix));
//    short Shorts[10]={7,-1};
//    printf("%lu,%lu\n",sizeof(Shorts),sizeof(Shorts[0]));
//    short *s=Shorts;
//    printf("%lu\n",sizeof(s));
//    s +=4;
//    printf("%d\n",s[0]);
//    s=&Shorts[2];
//    printf("%d\n",*(s-1));
    aumentaSegundos(1,59, 59);
    decSegundo(10, 0, 0);
    return 0;
}
