// Test.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string.h>

#define ARRAY_SIZE (4)

int my_array[ARRAY_SIZE];
int index_push;
int index_pop, pop_out;

void init_queue()
{
	index_push = 0;
	index_pop = 0;
	pop_out= 0;
}
void push_queue(int num)
{
	if (index_push<ARRAY_SIZE)
	{
		my_array[index_push]=num;
		index_push++;
	}
	else
		printf("Error\n");
}

int pop_queue()
{
	if ((index_pop<ARRAY_SIZE) && (index_push>index_pop))
	{
		pop_out=my_array[index_pop];
		index_pop++;
	}
	return pop_out;
}


int main(int argc, char* argv[])
{
	init_queue();

	//int f = pop_queue();

	push_queue(1);
	push_queue(2);
	push_queue(3);
	
	int a = pop_queue();
	int b = pop_queue();
	int c = pop_queue();

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

