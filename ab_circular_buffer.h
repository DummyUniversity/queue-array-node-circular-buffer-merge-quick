#ifndef ARRAY_BASED_CIRCULAR_BUFFER_20251201_H
#define ARRAY_BASED_CIRCULAR_BUFFER_20251201_H

#include <iostream>

class CircularBuffer
{
	int* buffer = NULL;
	int bufferSize = 0;

public:
	CircularBuffer(const int bufferSize);
	CircularBuffer(const CircularBuffer& other);
	CircularBuffer& operator = (const CircularBuffer& other);
	~CircularBuffer();

	void update(const int val);
	int getLatest() const;
	int getPrev(const int index = 1) const;	//Seems to work as getNext too, by being given negative indices.
	//Yes, I am leaving this comment here. This is from my own code. I implemented this a long time ago.

	void printBuffer() const;
	void printBufferProperly() const;
};

#endif
