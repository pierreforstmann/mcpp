// par.cpp
// //

#include <iostream>
#include "Person.h"
using std::cout;
using std::endl;

int main()
{
    int a = 3;
    cout << "a is " << a << endl;
    int& rA = a;
    rA = 5;
    cout << "a is " << a << endl;

    Person Adam("Adam", "Jones", 234);
    Person& rAdam = Adam;
    rAdam.SetNumber(345);
    cout << "rAdam: " << rAdam.GetName() << " " << rAdam.GetNumber() << endl;

    int* pA = &a;
    *pA = 4;
    cout << "a is " << a << endl;
    int b = 100;
    pA = &b;
    (*pA)++;
    cout << "a " << a << ", *pA " << *pA << endl;

    Person* pAdam = &Adam;
    (*pAdam).SetNumber(235);
    pAdam->SetNumber(236);
    cout << "Adam: " << Adam.GetName() << " " << Adam.GetNumber() << endl;
}


