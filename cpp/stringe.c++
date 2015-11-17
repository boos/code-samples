#include <string>
#include <iostream>

using namespace std;

int main()
{
	string a = "ciao";
	string b = "ciao";
	string c;
	
	a += a;
	
	if ( a == b )
		cout << "sono uguali\n";
	else
		cout << "sono diversi\n";
	
	cout << a[2] << endl;

}
