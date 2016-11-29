// Test.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>

#define ARRAY_SIZE (3)

int my_array[ARRAY_SIZE];
int index_push;
int index_pop;
int out;



void init_queue()
{
	index_push = 0;
	index_pop = 0;
}

int NextPush (int index) //function for promotion index_push
{
	int index_push_next;
	index_push_next = index + 1;
	if (index_push_next == ARRAY_SIZE)
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

	/*//if (!(index_push == index_pop))
	if ((index_pop != index_push+1) || (index_push == ARRAY_SIZE-1)&&(index_pop!=0))
	{
		my_array[index_push] = num;
		index_push++;
	}
	if (index_push==ARRAY_SIZE-1 && (index_pop!=0))
	{
		index_push = 0;
		my_array[index_push] = num;
	}
*/
}

	//printf("Error\n");

int pop_queue()
{
	//if ((index_pop<ARRAY_SIZE) && (index_push>index_pop))
	if (index_pop!=index_push)
		//index_pop<ARRAY_SIZE 
	{
		out = my_array[index_pop];
		index_pop++;
		if (index_pop == ARRAY_SIZE)
			index_pop = 0;
	}
	else
	{
		out = -1;
		printf("Error, queue is empty.\n");	// no room
	}

	return out;
	
}

int main(int argc, char* argv[])
{
	init_queue();

	//printf("%d %d", NextPlace(1), NextPlace(5));

	push_queue(1);
	push_queue(2);
	push_queue(3);
	push_queue(4);
	push_queue(5);
	
	
	int a = pop_queue();
	int b = pop_queue();
	int c = pop_queue();
	int g = pop_queue();

	push_queue(4);
	push_queue(5);
	push_queue(6);

	int d = pop_queue();
	int e = pop_queue();
	int f = pop_queue();



	printf("%d %d %d %d %d\n", a, b, c, d ,e);
	
	system("pause");
	return 0;
}


