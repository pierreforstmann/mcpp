// a.cpp

#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
using std::vector;
using std::cout;
using std::accumulate;
using std::string;

void print_vector(vector <int> p_v)
{
	for (int elem : p_v)
	{
		cout << elem << " ";
	}
	cout << '\n';
}

void print_int(int p)
{
	cout << p << '\n';
}

int main()
{
	//
	//
	//
	
	// way 1
	vector<int> v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	print_vector(v);

	// way 2
	for (int i = 0; i < 5; )
	{
		v.push_back(i++);
	}
	print_vector(v);

	// way 3
	int i  =0;
	std::generate_n(std::back_inserter(v), 5, [&]() { return i++;});
	print_vector(v);

	//
	//
	//
	int total = 0;

	for (int index = 0; index < 5; index++)
	{
		total += v[index];
	}
	print_int(total);

	total = 0;
	for (int elem : v)
	{
		total += elem;
	}
	print_int(total);

	total = std::accumulate(begin(v), end(v), 0);
	print_int(total);

	// counting the number of 3's
	int count3 = 0;
	for (unsigned int i = 0; i < v.size(); i++)
	{
		if (v[i] == 3)
		{
			count3++;
		}
	}
	print_int(count3);

	count3 = 0;
	for (auto it = begin(v); it != end(v); it++)
	{
		if (*it == 3)
		{
			count3++;
		}

	}
	print_int(count3);

	count3 = std::count(begin(v), end(v), 3);
	print_int(count3);

	//
	//
	//
	
	auto v2 = v;
	for (unsigned int index = 0; index < v2.size(); index++)
	{
		if (v2[index] == 3)
		{
			v2.erase(v2.begin() + index);
		}
	}
	print_vector(v2);

	auto v3 = v;
	for (auto it = begin(v3); it != end(v3); it++)
	{
		if (*it == 3)
		{
			// should invalidate the iterator and fail ...
			v3.erase(it);
		}
	}
	print_vector(v3);

	auto v4 = v;
	auto endv4 = std::remove_if(begin(v4), end(v4), [](int elem) { return (elem ==3);});
	print_vector(v4);
	v4.erase(endv4, end(v4));
	print_vector(v4);

	v4.push_back(-2);
	v4.push_back(7);
	v4.push_back(0);
	v4.push_back(1);

	sort(begin(v4), end(v4));
	print_vector(v4);

	bool allpositive = std::all_of(begin(v4), end(v4), [](int elem) {return elem >=  0;});
	cout << allpositive << '\n';

	string s{ "Hello I am a sentence " };
	auto letter = find(begin(s), end(s), 'a');
	cout << *letter << '\n';

	auto caps = std::count_if(begin(s), end(s), [](char c){return c != ' ' && (toupper(c) == c);});
	cout << caps << '\n';
	return 0;
}
