#include <iostream>
using namespace std;

int dog, cat, bird, fish;

void f(int pet) 
{
	cout << "pet id number: " << pet << endl;
}

int main()
{
	int i;

	cout << "f(): " << (long)&f << endl;
	cout << "dog: " << (long)&dog << endl;
	cout << "i  : " << (long)&i << endl;
}
