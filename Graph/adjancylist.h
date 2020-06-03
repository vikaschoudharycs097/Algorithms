/************************************
 * Interface of AdjancyList class
 * 
 * @author Vikas Choudhary
 * @date 03-06-2020
 ***********************************/

#ifndef ADJANCYLIST_H
#define ADJANCYLIST_H

#include "edgenode.h"
#include <vector>

class AdjancyList
{
    std::vector<EdgeNode*> _list;
private:
    // Constructor
    AdjancyList();
    AdjancyList(int n_vertex);

    // Getters
    int getNumOfVertex(void) const;

    // Setters
    void setNumOfVertex(int n_vertex);
};

#endif