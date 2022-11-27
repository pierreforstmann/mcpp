// ms.cpp
//
#include <chrono>
using std::chrono::system_clock;
using std::chrono::steady_clock;
using std::chrono::duration_cast;
using std::chrono::seconds;
using std::chrono::milliseconds;

#include <vector>
#include <list>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using std::cout;
using std::vector;
using std::list;
using std::string;

#include "Resource.h"

template <typename Func>
long long TimeFunc(Func f)
{
	auto begin = steady_clock::now();
	f();
	auto end = steady_clock::now();

	return duration_cast<milliseconds>(end-begin).count();
}

template <typename T >
void exercise(int size, string commonname)
{
	T v;
	typename T::template value_type res1("starting entry");
	v.push_back(res1);
	for (int i=0; i < size; i++)
	{
		int r = (int)rand();
		string s;
		int ss = r %100;
		s.reserve(ss);
		std::generate_n(std::back_inserter(s), ss, [ss]() {return (char)('!' + ss /2);});
		typename T::template value_type res(s);
		bool inserted = false;
		for (auto it = begin(v); it != end(v); it++)
		{
			if (*it > res)
			{
				v.insert(it, res);
				inserted = true;
				break;
			}
		}
	if (!inserted)
		v.push_back(res);
	}

	auto it = max_element(begin(v), end(v));
	typename T::template value_type maxV = *it;
	it = min_element(begin(v), end(v));
	typename T::template value_type minvV = *it;

	bool sorted = is_sorted(begin(v), end(v));
	cout << "sorted = " << sorted << '\n';
}

int main()
{
	int const size = 1000;

	auto vectormilliseconds = TimeFunc([&](){exercise<vector<Resource>>(size, "vector"); });
	auto listmilliseconds = TimeFunc([&](){exercise<list<Resource>>(size, "list"); });

	cout << "vector time = " << vectormilliseconds << " ms \n";
	cout << "list time = " << listmilliseconds << " ms \n";
}

