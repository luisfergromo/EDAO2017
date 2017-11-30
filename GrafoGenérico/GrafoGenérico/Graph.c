//
//  Graph.c
//  GrafoGenérico
//
//  Created by Luis Romo on 29/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#include "Graph.h"
Graph graph_create(){
    /*Crea    una    nueva    instancia    del    contenedor    Graph y    retorna    su    dirección    de    memoria.
     La    creación    de    la    nueva    instancia    implica:    reservar    memoria    e    inicializar    los    valores
     del    contenedor.*/
    Graph newGraph =(Graph) malloc(sizeof(struct strGraph));
    return newGraph;
}

void graph_destroy(Graph g){
/*Destruye    la    instancia     del contenedor    Graph. Para    esto se    libera toda    la memoria utilizada. */

}

void    graph_addVertex(Graph g,    Type data){
    /*Agrega    un    nuevo    vértice    al    grafo    de    manera    ordenada,    esto    es    acorde    al    Id    del
     nuevo    vértice    y    los    Id    de    los    vértices    ya    existentes    en    el    contendor. Para    esto    hay
     que    reservar    memoria    para    el    nuevo    vértice    e    inicializar    sus    valores. Considere que
     no    se    debe    poder    agregar    un    vértice    con    un    Id    ya    existente en    el    grafo. */
}
void    graph_addEdge(Graph g,    int source,    int sink){
/*Agrega    una    nueva arista al    grafo.    Para    esto,    se    agrega    en    la    lista    enlazada    del    vértice
 con    Id=source    el nuevo    sucesor (vértice    con    Id=sink). Considere    que    si    los    vértices
 con    id=source    y    id=sink no    existen    previamente, entonces    no    se    agrega    la    arista    al
 grafo.*/
}
int    graph_vertexCount(Graph g){
    //Retorna    el    número    de vértices    que    existen    en    el    grafo.
}
int    graph_edgeCount(Graph g){
    //Retorna    el    número    de    aristas que    existen    en    el    grafo
}
int graph_outDegree(Graph g, int source){
    /*Retorna    el    número    de    vertices    sucesores    que    tiene    en    su    lista    el vértice    con
     id=source.*/
}
Bool graph_hasEdge(Graph    g,    int source,    int sink){
    /*Retorna    True si    el    vértice    del    grafo    con    Id    =    source    tiene    en    su    lista    de    adyacencia
     un    vértice    con    el    Id=sink. En    otro    caso,    debe    retornar    False.*/
}
