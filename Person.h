#pragma once
#include <string>
#include "Resource.h"

#include <memory>

class Person
{
private:
   std::string firstname;
   std::string lastname;
   int arbitrarynumber;
   std::shared_ptr<Resource> pResource;

public:
   Person(std::string first, std::string last, int arbitrary);
   Person();
   virtual ~Person();
   // for "rule of 3"
   Person(Person const & p);
   Person& operator=(const Person &p);

   // add virtual for Getname to see changes in pai.cpp
   // as soon as you have one virtual function, destructor should also be virtual
   virtual std::string GetName() const;
   virtual int GetNumber () const {return arbitrarynumber;}
   void SetNumber(int number) {arbitrarynumber =  number; }
   bool operator<(Person const& p) const;
   bool operator<(int i) const;
   void SetFirstName(std::string first) {firstname = first;}
   void AddResource();
   std::string GetResourceName() const { return pResource ? pResource-> GetName() : "";}

};

bool operator<(int i, Person const& p);
