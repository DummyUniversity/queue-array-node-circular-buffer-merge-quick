#ifndef NODE_20251201_H
#define NODE_20251201_H

#include <iostream>

class Node
{
	int data;
	Node* next = NULL;

public:

	Node();
	~Node();
	Node(const int data);
	int getData();
	Node* getNext();
	void setData(const int data);
	void setNext(Node* next);
};

#endif
