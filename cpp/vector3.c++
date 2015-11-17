#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int i, i2, i3;
	vector<int> v;
	for ( i = 0 ; i < 10 ; i++ )
		v.push_back(i);
	
	for( i = 0 ; i < v.size() ; i++ ) 
		cout << v[i] << ", ";
	cout << endl;

	for(i = 0 ; i < v.size() ; i++ )
		v[i] = v[i] * 10;

	for ( i = 0 ; i < v.size() ; i++ ) 
		cout << v[i] << ", ";

	cout << endl;

}
