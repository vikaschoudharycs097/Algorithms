/***************************************
 * Implementation of AdjancyList class
 * 
 * @author Vikas Choudhary
 * @date 03-06-2020
 ***************************************/

#include "adjancylist.h"

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