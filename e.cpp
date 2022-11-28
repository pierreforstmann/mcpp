// e.cpp
//
#include <iostream>
#include <vector>
#include <exception>
#include "Employee.h"
#include "Noise.h"
using std::cout;
using std::vector;
using std::exception;
using std::out_of_range;

int main()
{
	vector<int> v;
	v.push_back(1);
	Noise n1("beep 1");
	try
	{
		Noise n2("bloop 2");
		Employee Adam("Adam", "Jones", 0);
		int j = v.at(99);
	}
	catch (out_of_range & e)
	{
		cout << "out of range exception " << e.what();
	}
	catch (exception & e)
	{
		cout << e.what();
	}
	return 0;
}
