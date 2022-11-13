// Person.cpp
#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, int arbitrary)
	:
	firstname(first),lastname(last),arbitrarynumber(arbitrary)
{
	cout << "constructing " << GetName() << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "constructing " << GetName() << endl;
}

Person::~Person()
{
	cout << "destructing " << firstname << " " << lastname << endl;
}

std::string Person::GetName() const
{
	return firstname + " " + lastname;
}
