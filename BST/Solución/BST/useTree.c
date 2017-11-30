/*
 * useTree.c
 *
 *  Created on: 14/11/2017
 *      Author: administrador
 */

#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

int compareInts(Type t1, Type t2);
void printInts(Type t, int spaces);
int main(){
	Set s;
	int i;
	int v[]={5, 3, 8, 2, 9};
	s=set_create(compareInts);
	printf("Tamaño del árbol: %d \n", set_size(s));
	for(i=0;i<5;i++)
		set_add(s, &v[i]);
	printf("Tamaño del árbol: %d \n", set_size(s));
	printf("Contenido del Árbol \n");
	set_print(s, printInts);
	set_remove(s, &v[1]);
	printf("Contenido del Árbol \n");
	set_print(s, printInts);
	set_remove(s, &v[2]);
	printf("Contenido del Árbol \n");
	set_print(s, printInts);
	set_remove(s, &v[3]);
	printf("Contenido del Árbol \n");
	set_print(s, printInts);

	for(i=0;i<5;i++)
		set_add(s, &v[i]);
	printf("Contenido del Árbol \n");
	set_print(s, printInts);

	printf("Tamaño del árbol: %d \n", set_size(s));
	return 0;
}

int compareInts(Type t1, Type t2)
{
	int v1=*((int*)t1);
	int v2=*((int*)t2);
	return v1-v2;
}

void printInts(Type t, int spaces){
	int num=*((int *)t);
	int i;
	for(i=0;i<spaces; i++)
		printf(" ");
	printf("%d \n", num);
}
