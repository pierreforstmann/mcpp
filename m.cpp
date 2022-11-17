// m.cpp
// 
#include "Person.h"

int main()
{
   Person Adam("Adam", "Jones", 345);
   Adam.AddResource();
   Adam.SetFirstName("Adam2");
   Adam.AddResource();
   Person Adam2 = Adam;
   return 0;

}
