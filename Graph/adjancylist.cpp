/***************************************
 * Implementation of AdjancyList class
 * 
 * @author Vikas Choudhary
 * @date 03-06-2020
 ***************************************/

#include "adjancylist.h"
#include <iostream>

// Constructors
AdjancyList::AdjancyList(): _list(0)
{

}

AdjancyList::AdjancyList(int n_vertex): _list(n_vertex)
{

}

// Getters
int AdjancyList::getNumOfVertex(void) const 
{
    return _list.size();
}

// Setters
void AdjancyList::setNumOfVertex(int n_vertex)
{
    _list.resize(n_vertex);
}

void AdjancyList::addEdge(int src, int dest)
{
    if (src < 0 || src > _list.size() || dest < 0 || dest > _list.size())
    {
        std::cerr << "Error: Invalid source or destination vertex\n";
    }
    else 
    {
        EdgeNode *edge = new EdgeNode(src, dest, _list[src]);
        _list[src] = edge; 
    }
}

void AdjancyList::addEdge(int src, int dest, double weight)
{
    if (src < 0 || src > _list.size() || dest < 0 || dest > _list.size())
    {
        std::cerr << "Error: Invalid source or destination vertex\n";
    }
    else 
    {
        EdgeNode *edge = new EdgeNode(src, dest, weight, _list[src]);
        _list[src] = edge; 
    }
}