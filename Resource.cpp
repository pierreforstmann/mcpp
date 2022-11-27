// Resource.cpp
//
#include "Resource.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Resource::Resource(string n):name(n)
{
    cout << "constructing " << name << endl;
}

Resource::Resource(const Resource& r): name(r.name)
{
    cout << "copy constructing " << name << endl;
}

Resource::~Resource(void)
{
    cout << "destructing " << name << endl;
}

Resource::Resource(Resource&& r) :name(std::move(r.name))
{
}

Resource & Resource::operator=(Resource&& r)
{
	if (this != &r)
	{
		name = std::move(r.name);
		r.name.clear();
		cout << "move assigning " << name << '\n';
	}
	return *this;
}

Resource& Resource:: operator=(const Resource& r)
{	
    name  = r.GetName();
    cout << "copy assigning " << name << endl;
    return *this;
}
