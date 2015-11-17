#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("ciccio.cpp");
	ofstream out("copy.cpp");
	string s;

	while(getline(in, s)) 
		out << s << "\n";

}
