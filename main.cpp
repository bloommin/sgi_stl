#include <iostream>

#include "stl/vector"
#include "stl/list"
#include "stl/deque"
#include "stl/map"

int main()
{
	vector<int> v;
	v.push_back(1);

	list<int> l;
	l.push_back(2);

	deque<int> d;
	d.push_back(3);

	map<int, int> m;
	m[0] = 4;

	std::cout << v[0] << "\n" << l.front() << "\n" << d[0] << "\n" << m[0] << std::endl;

	long long a;
}