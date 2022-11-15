// tf.cpp
// 
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"

template <class T>
T maxf(T const &t1, T const& t2)
{
   return t1 < t2 ? t2: t1;
}

int main()
{
    cout << "max of 33 and 44 is " << maxf(33,44) << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << "max of " << s1 << " and " << s2 << " is " << maxf(s1,s2) << endl;
    Person p1("Adam", "Jones", 123);
    Person p2("Eve", "Smith", 456);
    cout << "max of " << p1.GetName() << " and " << p2.GetName() << " is "
	    << maxf(p1,p2).GetName() << endl;
}
