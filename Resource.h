// Resource.h
//
#pragma once
#include <string>

class Resource
{
private:
   std::string name;
public:
   Resource(std::string n);
   virtual ~Resource(void);
   virtual std::string GetName() const { return name; }
};
