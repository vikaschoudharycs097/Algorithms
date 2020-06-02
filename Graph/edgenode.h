/****************************************
 * Interface of EdgeNode class
 * 
 * @author Vikas Choudhary
 * @date 02.06.2020
 ****************************************/

#ifndef EDGENODE_H
#define EDGENODE_H

#include "edge.h"

class EdgeNode: public Edge 
{
    Edge *_next;
public:
    // Constructors
    EdgeNode(int src_vertex, int dest_vertex);
    EdgeNode(int src_vertex, int dest_vertex, Edge *next);
    EdgeNode(int src_vertex, int dest_vertex, double weight);
    EdgeNode(int src_vertex, int dest_vertex, double weight, Edge *next);

    // Getters
    Edge *getNext(void) const;

    // Setters
    void setNext(Edge *next);
};

#endif