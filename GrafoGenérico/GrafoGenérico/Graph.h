//
//  Graph.h
//  GrafoGenérico
//
//  Created by Luis Romo on 29/11/17.
//  Copyright © 2017 Luis Romo. All rights reserved.
//

#ifndef Graph_h
#define Graph_h

#include <stdio.h>
typedef void* Type;
typedef enum{TRUE,FALSE} Bool;
struct strNode{
    int GUID; //Global Unique identifier
    Type data; //Tipo de dato genérico (void*)
    //lista enlazada a otro elemento, solo se puede conectar a dos y puede ser tanto de ida como de venida
};
typedef struct strNode Graph;
struct    strGraph{
    /* Esta estructura    permitirá crear    nuevos    contenedores    Graph,    y    debe    contener    la    siguiente    información:
     • Un    arreglo    dinámico    de    vértices    (inicialmente    de    tamaño    0).
     • Número    de    vértices    en    el    grafo
     • Número    de    aristas    en    el    grafo */
    //Graph graph;
    struct strNode *conectorA, *conectorB;
    int arNum;
    int verNum;
};
Graph graph_create();
void graph_destroy(Graph g);
void    graph_addVertex(Graph g,    Type data);
void    graph_addEdge(Graph g,    int source,    int sink);
int    graph_vertexCount(Graph g);
int    graph_edgeCount(Graph g);
int graph_outDegree(Graph g, int source);
Bool graph_hasEdge(Graph    g,    int source,    int sink);
#endif /* Graph_h */
