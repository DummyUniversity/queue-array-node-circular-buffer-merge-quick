#ifndef QUEUE_ABSTRACT_20251201_H
#define QUEUE_ABSTRACT_20251201_H

#include "node.h"
#include <iostream>

class Queue
{
public:

	virtual void enqueue (const int data) = 0;
	virtual int dequeue () = 0;
	virtual int peek() const = 0;

	virtual bool isEmpty() const = 0;
	virtual int getSize() const = 0;
};

class ArrayBasedQueue : public Queue
{
	int* queue = NULL;
	int capacity;
	int front = -1, rear = -1;

public:

	ArrayBasedQueue(const int capacity);
	ArrayBasedQueue(const ArrayBasedQueue& other);
	ArrayBasedQueue& operator = (const ArrayBasedQueue& other);
	~ArrayBasedQueue();

	void enqueue (const int data) override;
	int dequeue () override;
	int peek() const override;

	bool isEmpty() const override;
	int getSize() const override;
};

class NodeBasedQueue : public Queue
{
	Node* front = NULL;
	Node* back = NULL;

public:

	NodeBasedQueue();
	NodeBasedQueue(const NodeBasedQueue& other);
	NodeBasedQueue& operator = (const NodeBasedQueue& other);
	~NodeBasedQueue();

	void enqueue (const int data) override;
	int dequeue () override;
	int peek() const override;

	bool isEmpty() const override;
	int getSize() const override;
};

#endif
