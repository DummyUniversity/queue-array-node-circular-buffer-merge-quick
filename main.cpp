#include <iostream>
#include "queue.h"
#include "ab_circular_buffer.h"
#include "sorts.h"
#include "test.h"
using namespace std;

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		return test(argv[1]);
	}
	cout << "Meow!\n";

	return 0;
}