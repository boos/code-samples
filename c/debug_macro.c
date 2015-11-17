#include <stdio.h>

#define DEBUG(str, args...)	fprintf(stderr,"%s:%d : " str , __FILE__, __LINE__, ##args);

int main()
{

	DEBUG("preprocessing tips\n");
}
