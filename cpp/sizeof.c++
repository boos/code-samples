#include <iostream>
using namespace std;

class testsize
{
	public:
	static struct header_t
	{
		int a,b,c,d;
	} header;
};

int main()
{
	int a, b;
	testsize *ciao;
	ciao = new testsize;
	cout << "sizeof(double) = " << sizeof(double) << endl ;
	a = sizeof b;
	cout << "sizeof b = " << a << endl;
	cout << "sizeof public.header " << sizeof(ciao) << "\n";
}
