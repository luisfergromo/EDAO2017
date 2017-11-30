/*
 ============================================================================
 Name        : Tree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tree.h"

struct strNode{
	Type data;
	struct strNode *left, *right;
};

typedef struct strNode Node;

struct strSet{
		Node *root;
		int size;
		CompareFunc cf;
};

Node * newNode(Type data){
	Node *new;
	new=(Node *)malloc(sizeof(Node));
	new->left=NULL;
	new->right=NULL;
	new->data=data;
	return new;
}

Node* findMoreLeft(Node *target){
	if(target){
		while(target->left)
			target=target->left;
	}
	return target;
}

Set set_create(CompareFunc function){
	Set new;
	new=(Set)malloc(sizeof(struct strSet));
	new->cf=function;
	new->root=NULL;
	new->size=0;
	return new;
}

unsigned int set_size(Set s){
	if(s!=NULL)
		return s->size;
	else
		return -1;
}

Bool set_add(Set s, Type data){
	Node *current;
	Bool found=False;
	int status;
	Bool added=False;
	if(s!=NULL){
		if(s->root==NULL){  //El árbol no tenia nodos
			s->root=newNode(data);
			s->size++;
			added=True;
		}
		else{	//El árbol ya tiene nodos
			//El nodo actual será raiz
			current=s->root;
			//Desplazarse mientras no se encuentre el dato a agregar y no se haya añadido
			while((!found)&&(!added)){
				status=s->cf(current->data, data);
				if(status==0){
					//El data ya existe en el árbol
					found=True;
				}
				else{
					if(status>0){
						//El dato nuevo es menor
						if(current->left==NULL){
							current->left=newNode(data);
							s->size++;
							added=True;
						}
						else
							current=current->left;
					}
					else{
						//El dato es mayor
						if(current->right==NULL){
							current->right=newNode(data);
							s->size++;
							added=True;
						}
						else
							current=current->right;
					}
				}
			}
		}
	}
	return found;
}


Bool set_contains(Set s, Type data){
	Node *current;
	int status;
	if(s){
		current=s->root;
		while(current!=NULL){
			status=s->cf(current->data, data);
			if(status==0)
				return True;
			else{
				if(status>0)
					current=current->left;
				else
					current=current->right;
			}
		}
	}
	return False;
}


Node * removeNode(Node *root, Type data, CompareFunc cf){
	Node * tmpRoot=NULL;
	int status;
	if(root){
		status=cf(root->data, data);
		if(status==0){
			//El nodo a eliminar se encuentra en la raiz
			if((root->left==NULL)&&(root->right==NULL)){
				//root no tiene hijos
				free(root);
				return NULL;
			}
			else{
				if(root->left==NULL){
					tmpRoot=root->right;
					free(root);
					return tmpRoot;
				}
				if(root->right==NULL){
					tmpRoot=root->left;
					free(root);
					return tmpRoot;
				}
				tmpRoot=findMoreLeft(root->right);
				memcpy(root->data, tmpRoot->data, sizeof(*data));
				root->right=removeNode(root->right, tmpRoot->data, cf);
			}
		}
		else
		{
			if(status>0){
				//El dato almacenado en Root es mayor que el dato a eliminar
				root->left=removeNode(root->left, data, cf);
			}
			else
			{
				root->right=removeNode(root->right, data, cf);
			}
		}
	}
	return root;
}

Bool set_remove(Set s, Type data){
	Bool removed=False;
	if(s){
		if(set_contains(s, data)==True){
			s->root=removeNode(s->root, data, s->cf);
			s->size--;
			removed=True;
		}
	}
	return removed;
}

Bool set_destroy(Set s){
	return True;
}

void print(Node *node, printFunc pf, int spaces){
	pf(node->data, spaces);
	if(node->left)
		print(node->left, pf, spaces+1);
	if(node->right)
		print(node->right, pf, spaces+1);
}

void set_print(Set s, printFunc pf){
	print(s->root, pf, 0);
}













