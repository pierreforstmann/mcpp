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

bool Person::operator<(Person const& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}
bool Person::operator<(int i) const
{
	return arbitrarynumber < i;
}


//
// free function
// 
bool operator<(int i, Person const& p)
{
	return i < p.GetNumber();
}
