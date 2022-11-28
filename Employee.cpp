// Employee.cpp
//

#include "Employee.h"
#include <iostream>
#include <exception>
#include "Noise.h"

using std::string;
using std::invalid_argument;

Employee::Employee() : firstname(""), lastname(""), arbitrarynumber(-1)
{
};

Employee::Employee(string first , string last, int arbitrary):
	           firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	Noise np("Speaking");
	if (arbitrarynumber == 0)
	{
		throw invalid_argument("Arbitrary number for a Employee cannot be zero.\n");
	}
}
