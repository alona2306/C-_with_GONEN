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
	index_pop = ARRAY_SIZE-1;
}

/*int NextPlace (int index)
{
	int nextPlace;
	nextPlace = index+1;
	if (nextPlace = ARRAY_SIZE)
	{
		nextPlace = 0;
	}
	

	return nextPlace;
}
*/

void push_queue(int num)
{
	//if (!(index_push == index_pop))
	if ((index_push != index_pop) && (index_push < ARRAY_SIZE))
	{
		my_array[index_push] = num;
		index_push++;
	}
	if (index_push == ARRAY_SIZE && (index_pop!=0))
	{
		index_push = 0;
		my_array[index_push] = num;
	}
}

	//printf("Error\n");

int pop_queue()
{
	
	//if ((index_pop<ARRAY_SIZE) && (index_push>index_pop))
	if (index_push != index_pop && index_pop<ARRAY_SIZE)
	{
		out = my_array[index_pop];
		index_pop++;
		if (index_pop == ARRAY_SIZE-1)
			index_pop = 0;
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


