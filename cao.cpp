// cao.cpp
// 

#include "Tweeter.h"
#include "status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Thomas","Jones", 123);
    {
	    Tweeter t1("Someone", "Else", 456, "@whoever");
	    string name2 = t1.GetName();
    	    cout << "t1 name is " << name2 << endl;
    }
    cout << "after innermost block" << endl;
    string name = p1.GetName();
    cout << "p1 name is " << name << endl;

    cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
    p1.SetNumber(124);
    cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notfound;
    fe  = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;


    return 0;

}
