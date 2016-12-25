// Test.cpp : Defines the entry point for the console application.
//

#include <iostream>

int* my_array;
int index_push;
int index_pop;
int arraySize;

void init_queue(int numElements)
{
	index_push = 0;
	index_pop = 0;

	arraySize = numElements;
	my_array = (int*)malloc(numElements);
}

int NextPush (int index) //function for promotion index_push
{
	int index_push_next;
	index_push_next = index + 1;
	if (index_push_next == arraySize)
	{
		index_push_next = 0;
	}
	
	return index_push_next;
}

void push_queue(int num)
{
	int index_push_next = NextPush(index_push);

	if (index_push_next == index_pop)
	{
		printf("Error, no free space.\n");	// no room
	}
	else
	{
		// insert num to array
		my_array[index_push] = num;
		index_push = index_push_next;
	}
}

int pop_queue()
{
	int out;
	if (index_pop!=index_push)
	{
		out = my_array[index_pop];
		index_pop++;
		if (index_pop == arraySize)
			index_pop = 0;
	}
	else
	{
		out = -1;
		printf("Error, queue is empty.\n");	// no room
	}

	return out;
}
