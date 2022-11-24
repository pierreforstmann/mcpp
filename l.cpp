// l.cpp
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Resource.h"
#include <memory>
using std::vector;
using std::cout;
using std::string;
using std::make_unique;

int main()
{
	auto isOdd = [](int candidate){return candidate % 2 != 0;};
	
	bool is3Odd = isOdd(3);
	bool is4Odd = isOdd(4);

	vector<int> nums {2,3,4,-1,1};

	int odds = std::count_if(begin(nums), end(nums), isOdd);
	cout << "odds = " << odds << '\n';

	int evens = std::count_if(begin(nums), end(nums), [] (int candidate) {return candidate % 2 == 0;});
	cout << "evens = " << evens << '\n';

	// capturing by value and reference explicitly [x,y,&message]
	
	int x = 3;
	int y = 7;
	string message = "elements between ";
	message += std::to_string(x) + " and " + std::to_string(y) + " inclusive: ";
	for_each(begin(nums), end(nums),
		[x, y, &message](int n)
		{
			if ( n >= x && n <= y)
				message +=  " " + std::to_string(n);
		});
	cout << "message = " << message << '\n';
	
	// x by value, rest by ref
	x = y = 0;
	std::for_each(begin(nums), end(nums),
		[&, x](int element) mutable {
		x += element;
		y += element;
		});	
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	{ // braces for scope
		auto pResource = make_unique<Resource>(", ");

		for_each(begin(nums),end(nums),
			[=, &message, p=std::move(pResource)](int n)
			{
				if ( n >= x && n <= y)
					message += p->GetName() + std::to_string(n);
			});
		//pResource not out of scope yet
		int i =2;
	}
	cout << "message = " << message << '\n';
}
