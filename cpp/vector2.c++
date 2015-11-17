#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;
	ifstream in("vector.c++");
	string word;

	while ( in >> word )
		v.push_back(word);

	for ( int i = 0 ; i < word.size() ; i++ ) 
		cout << word[i] << endl;

}
