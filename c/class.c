#include <stdio.h>

struct class
{
	void (*function)();

} oop;


void function()
{
	printf("OOP with C\n");
};


int main(int argc, char **av)
{
	oop.function = function;
	oop.function();
	
	return 0;
}
