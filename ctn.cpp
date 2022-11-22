// ctn.cpp
// 
//

#include "Resource.h"
#include <vector>
#include <stdexcept>
#include <iostream>

using std::vector;
using std::cout;

int main()
{
	vector<int> numbers{0,1,2};
	numbers.push_back(-2);
	numbers[0] = 3;
	int num = numbers[2];

	for (int i: numbers)
	{
		cout << i << '\n';
	}

	Resource r("local");
	{ // braces for scope
		cout << "--------------------------------------------" << '\n';
		vector<Resource> resources;
		resources.push_back(r);
		cout << "--------------------------------------------" << '\n';
		resources.push_back(Resource("first"));
		cout << "--------------------------------------------" << '\n';
		resources.push_back(Resource("second"));
		cout << "--------------------------------------------" << '\n';

	}
	

	return 0;

}	
