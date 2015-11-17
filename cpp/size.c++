#include <iostream>
using namespace std;

int main()
{


	char c;
	unsigned char uc;
	int i;
	unsigned int ui;
	short int si;
	unsigned short int usi;
	long int li;
	unsigned long int uli;
	float f;
	double d;
	long double ld;
	cout 
		<< "\n char= " << sizeof(c)
		<< "\n unsigned char= " << sizeof(uc)
		<< "\n int = " << sizeof(i)
		<< "\n unsigned int = " << sizeof(ui)
		<< "\n short int = " << sizeof(si)
		<< "\n unsigned short int = " << sizeof(usi)
		<< "\n long = " << sizeof(li)
		<< "\n unsigned long = " << sizeof(uli)
		<< "\n float = " << sizeof(f)
		<< "\n double = " << sizeof(d)
		<< "\n long double = " << sizeof(ld) << endl;
}
