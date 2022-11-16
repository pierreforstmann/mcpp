// c.cpp
// 

#include <iostream>
#include "Person.h"

int DoubleIt(int x)
{
    return x*2;
}

int main()
{
    int i = 3;
    i = 4;

    int& ri =i;
    ri = 5;

    int const & cri = i;

    int j=10;
    int DoubleJ = DoubleIt(j);
    int DoubleTen= DoubleIt(10);

    Person Adam("Adam", "Jones", 234);
    Adam.SetNumber(235);
    Person const cAdam = Adam;
    int AdamNumber = cAdam.GetNumber();

    int * pI = &i;

    int const * pcI = pI; // pointer to a const
    pcI = &j;
    j = *pcI;

    int * const cpI = pI; // const pointer
    *cpI = 4;

    int const * const crazy = pI; // const pointer to a const
    j = *crazy;

    return 0;
}
