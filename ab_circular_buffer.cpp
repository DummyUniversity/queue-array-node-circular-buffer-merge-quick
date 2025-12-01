#include "ab_circular_buffer.h"

CircularBuffer::CircularBuffer(const int bufferSize) {}
CircularBuffer::CircularBuffer(const CircularBuffer& other) {}
CircularBuffer& CircularBuffer::operator = (const CircularBuffer& other) {}
CircularBuffer::~CircularBuffer() {}

void CircularBuffer::update(const int val) {}
int CircularBuffer::getLatest() const {}
int CircularBuffer::getPrev(const int index) const {}	//Seems to work as getNext too, by being given negative indices.
//Yes, I am leaving this comment here. This is from my own code. I implemented this a long time ago.

void CircularBuffer::printBuffer() const {}
void CircularBuffer::printBufferProperly() const {}
