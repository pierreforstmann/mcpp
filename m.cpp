// m.cpp
// 
#include "Person.h"
#include <string>
using std::string;

int main()
{
   Person Adam("Adam", "Jones", 345);
   Adam.AddResource();
   string s1 = Adam.GetResourceName();
   Adam.AddResource();
   return 0;

}
