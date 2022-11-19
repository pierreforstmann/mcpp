#include "Tweeter.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Tweeter::Tweeter(string first,
	 string last,
	 int arbitrary,
	 string handle)
	:
	Person(first, last, arbitrary),
	twitterhandle(handle)
{
	cout << "constructing tweeter " << twitterhandle << endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing tweeter " << twitterhandle << endl;
}

std::string Tweeter::GetName() const
{
	return Person::GetName() +  " "  + twitterhandle;
}
