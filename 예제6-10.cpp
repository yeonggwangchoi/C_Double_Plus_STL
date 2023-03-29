#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5);

	cout << "size:" << v.size() << "capavity:" << v.capacity() << endl;

	vector<int>().swap(v);
	cout << "size:" << v.size() << "capavity:" << v.capacity() << endl;
}