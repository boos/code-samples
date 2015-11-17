#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	int i;
	vector<string> v;
	ifstream in("vector.c++");
	string line;
	while(getline(in, line))
		v.push_back(line);
		
	for(i = 0 ; i < v.size(); i++ )
		cout << i << ": " << v[i] << endl;

}
