// ct.cpp
//
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Resource.h"

int main()
{
    Tweeter t("Adam", "Jones", 123, "@jonescons");
    Person* p = &t;
    Tweeter* pt = static_cast<Tweeter*>(p);
    cout << pt->GetName() << endl;

    Resource r("local");
    Tweeter *pt2;
    cout << "User Resource or Tweeter ?" << endl;
    std::string answer;
    std::cin >> answer;
    if (answer == "r")
    {
        pt2 = dynamic_cast<Tweeter*>(&r);
    }
    else
    {
        pt2 = dynamic_cast<Tweeter*>(p);
    }

    if (pt2)
    {
        cout << pt2->GetName() << endl;
    }
    else
    { 
	cout << "pointer can'be cast to tweeter" << endl;
    }
  
    return 0;
}
