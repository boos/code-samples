#include <stdio.h>

void (*function)(int ac, char *);

void func0(int ac)
{
	printf("stampo solo il numero di argomenti %d\n", ac);
}

void func1(int ac, char *arg)
{
	printf("ac: %d av[1]: %s\n", ac, arg);
}

int main(int argc, char **av)
{

	printf("argc == %d\n", argc);

	if ( argc == 1 ) 
		function = &func0;

	if ( argc == 2 ) 
		function = &func1;

	function(argc, av[0]);

}
