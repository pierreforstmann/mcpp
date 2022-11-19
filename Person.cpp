// Person.cpp
#include "Person.h"
#include "Resource.h"
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

void Person::AddResource()
{
	pResource.reset();
	pResource = std::make_shared<Resource>("Resource for " + GetName());
}

Person::Person(Person const & p)
{
	pResource = std::make_shared<Resource>("Resource for " + GetName()); 
}

Person& Person::operator=(const Person& p)
{
	pResource = std::make_shared<Resource>("Resource for " + GetName()); 
	return *this;
}

//
// free function
// 
bool operator<(int i, Person const& p)
{
	return i < p.GetNumber();
}
