#include "queue.h"

NodeBasedQueue::NodeBasedQueue() {}
NodeBasedQueue::NodeBasedQueue(const NodeBasedQueue& other) {}
NodeBasedQueue& NodeBasedQueue::operator = (const NodeBasedQueue& other) { return *this; }
NodeBasedQueue::~NodeBasedQueue() {}

void NodeBasedQueue::enqueue (const int data) {}
int NodeBasedQueue::dequeue () { return 0; }
int NodeBasedQueue::peek() const { return 0; }

bool NodeBasedQueue::isEmpty() const { return true; }
int NodeBasedQueue::getSize() const { return 0; }
