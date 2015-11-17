#include <stdio.h>

#define LOG(str, args...) 	fprintf(stderr, str, ##args);

int main(int ac, char **av)
{

	LOG("hello world\n");
	LOG("stderr, out: %s\n", av[0]);


}
