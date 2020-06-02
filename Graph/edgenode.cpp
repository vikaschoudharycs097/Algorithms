/************************************
 * Implementation of EdgeNode class
 * 
 * @author Vikas Choudhary
 * @date 02.06.2020
 ************************************/

#include "edgenode.h"

// Constructors
EdgeNode::EdgeNode(int src_vertex, int dest_vertex):
Edge(src_vertex, dest_vertex)
{

}

EdgeNode::EdgeNode(int src_vertex, int dest_vertex, Edge *next):
Edge(src_vertex, dest_vertex), _next(next)
{

}

EdgeNode::EdgeNode(int src_vertex, int dest_vertex, double weight)
Edge(src_vertex, dest_vertex, weight)
{

}

EdgeNode::EdgeNode(int src_vertex, int dest_vertex, double weight, Edge *next)
Edge(src_vertex, dest_vertex, weight), _next(next)
{

}

// Getters
Edge* EdgeNode::getNext(void) const
{
    return _next;
}

// Setters
void EdgeNode::setNext(Edge *next)
{
    _next = next;
}