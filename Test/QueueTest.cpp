
#include "Queue.h"

#include <iostream>
#include <string>


int main(int argc, char* argv[])
{
	init_queue(10);

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

	printf("%d %d %d %d %d\n", a, b, c, d, e);

	system("pause");
	return 0;
}

