/************************************
 * Implementation of Edge class
 * 
 * @author Vikas Choudhary
 * @date 01.06.2020
 ************************************/

#include "edge.h"

// Constructor
Edge::Edge(int src_vertex, int dest_vertex):
_src_vertex(src_vertex), _dest_vertex(dest_vertex), _weight(1)
{

}

Edge::Edge(int src_vertex, int dest_vertex, double weight):
_src_vertex(src_vertex), _dest_vertex(dest_vertex), _weight(weight)
{

}

// Getters
int Edge::getSource(void) const
{
    return _src_vertex;
}

int Edge::getDest(void) const
{
    return _dest_vertex;
}

int Edge::getWeight(void) const
{
    return _weight;
}