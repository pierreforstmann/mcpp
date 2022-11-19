// pai.cpp
// 

#include "Person.h"
#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;
#include <memory>
using std::shared_ptr;
using std::make_shared;

int Dummy(Person p) { return p.GetNumber(); };

int main()
{
    Person Adam ("Adam", "Jones", 456);
    Person & rAdam = Adam;
    Person * pAdam = &Adam;

    Tweeter AdamJonescons ("Adam", "Jones", 567, "@jonescons");
    Person *pAdamJonescons = &AdamJonescons;
    Person& rpAdamJonescons = AdamJonescons;
    Tweeter& rtAdamJonescons = AdamJonescons;

    cout << rAdam.GetName() << endl;
    cout << pAdam->GetName() << endl;
    cout << AdamJonescons.GetName() << endl;
    cout << rpAdamJonescons.GetName() << endl;
    cout << rtAdamJonescons.GetName() << endl;
    cout << pAdamJonescons->GetName() << endl;

    Person * SomeOne = new Tweeter("Someone", "Else", 567, "@someone");
    cout << SomeOne->GetName() << endl;
    delete SomeOne;

    shared_ptr<Person> spAdam = make_shared<Tweeter>("First", "Name", 678, "@handle");
    cout << spAdam->GetName() << endl;

    Adam = AdamJonescons;
    cout << Adam.GetName() << endl;

    int x;
    x = Dummy(Adam);
    x = Dummy(AdamJonescons);
}
