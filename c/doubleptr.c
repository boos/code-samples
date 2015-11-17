/*
 * double pointer example
 * 
 */
#include <stdio.h>
#include  <stdlib.h>

struct data
{
	int a,b;
};

int function(struct data *in, struct data **out)
{
	int i,n;
	
	*out = malloc(10 * sizeof(struct data *));
	for ( n = i = 0 ; i < 10 ; i ++ )
	{
		if ( i % 2 )
		{
			(*out)[n] = in[i];
			n++;
		}
	}

	return n;
}

int main()
{
	struct data a[10];
	struct data *b = NULL;
	int i = 0, n;

	for ( i = 0 ; i < 10 ; i ++ )
		a[i].a = i;

	n = function(a, &b);

	for ( i = 0 ; i < n ; i++ )
		printf("b.i: %d\n", b[i].a);

	return 0;

}
