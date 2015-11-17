#include <stdio.h>

int main()
{
	struct S
	{
		int *p;
	};

	struct S *s;

	if(s->p == NULL)
		printf("OK");

}
