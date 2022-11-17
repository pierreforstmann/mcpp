// Person.cpp
#include "Person.h"
#include "Resource.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, int arbitrary)
	:
	firstname(first),lastname(last),arbitrarynumber(arbitrary),
	pResource(nullptr)
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
	delete pResource;
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
	delete pResource;
	pResource=new Resource("Resource for " + GetName());
}

Person::Person(Person const & p)
{
	pResource = new Resource(p.pResource->GetName());
}

Person& Person::operator=(const Person& p)
{
	delete pResource;
	pResource = new Resource(p.pResource-> GetName());
	return *this;
}

//
// free function
// 
bool operator<(int i, Person const& p)
{
	return i < p.GetNumber();
}
