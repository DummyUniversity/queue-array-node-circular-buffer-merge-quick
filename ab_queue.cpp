#include "queue.h"

ArrayBasedQueue::ArrayBasedQueue(const int capacity) {}
ArrayBasedQueue::ArrayBasedQueue(const ArrayBasedQueue& other) {}
ArrayBasedQueue& ArrayBasedQueue::operator = (const ArrayBasedQueue& other) { return *this; }
ArrayBasedQueue::~ArrayBasedQueue() {}

void ArrayBasedQueue::enqueue (const int data) {}
int ArrayBasedQueue::dequeue () { return 0; }
int ArrayBasedQueue::peek() const { return 0; }

bool ArrayBasedQueue::isEmpty() const { return true; }
int ArrayBasedQueue::getSize() const { return 0; }
