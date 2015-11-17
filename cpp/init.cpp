#include <stdio.h>

class Test
{
	    public:
	    Test(void) : variabile(0)
		{ 
			printf("Costruttore richiamato\n"); 
		};

	    void Function(char *param = "TEST parametri di default in c++\n", char *param2 = NULL) 
		{ 
			printf("function padre: %s\n", param); 
			if ( param2 == NULL )
				printf("function param2\n");
		};

	    int variabile;
};


int main()
{
	class Test Prova;
	Prova.Function(param, "test");
}
