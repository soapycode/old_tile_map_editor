#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

//IMPORTANT: you are required to define NodeDataType as a valid value
#include "NodeDataType.h"

struct Node
{
    Node *next;
    NodeDataType data;
};

struct LinkedList
{
    Node *front;
};

void adt_addToFront(LinkedList *ll, NodeDataType data);
void adt_addToBack(LinkedList *ll, NodeDataType data);

#endif
