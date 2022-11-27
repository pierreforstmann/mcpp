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
   Resource(const Resource& r);
   Resource& operator=(const Resource& r);
   virtual ~Resource(void);
   virtual std::string GetName() const { return name; }
   Resource(Resource &&r);
   Resource& operator=(Resource &&r);
   bool operator>(const Resource& r) { return r.name > name;}
   bool operator<(const Resource& r) { return r.name < name;}
   bool operator==(const Resource& r) { return r.name == name;}
};
